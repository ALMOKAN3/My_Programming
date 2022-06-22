#include <iostream>
#include <string.h>
using namespace std;

/*
    _ OOP ماهي وما فائدتها?
        هي طريقة لترتيب الكود الخاص بك عبر إنشاء مجموعة من الفئات والهياكل
        من فوائدها أنها تجعل البرنامج أسهل في القراءة والتعديل وهذا يساعد على عمل الفريق أكثر
    _ (Object) ما هو الكائن وعلى ماذا يحتوي?
        كل شيء بمعنى شيء يعتبر كائن
    _ مثلا السيارة (Properties) كل كائن له خصائص معينة وهذا يسمى بالـ:
        لها نوع وسعر ومالك ومسافة قد سارتها كل هذه الأمور تعتبر خصائص
        Type = "BMW"
        Price = 10000$
        MilesDrive = 105
        Owner = "Ahmed"
    _ مثلا السبارة أيضا (Methodes) وأيضا لكل كائن طرق أو مناهج يسير عليها:
        لها طرق عدة منها طباعة السعر واسم المالك
        GetPrice();
        GetOwner();
    _ شكل مثال السيارة بالأكواد:
        public class Car{
            string Type;
            double Price;
            double MilesDrive;
            string Owner;
            double GetPrice(){
                double NewPrice = Price - (MilesDrive * 100);
                return NewPrice;
            }
            string GetOwner(){
                return Owner;
            }
        }
    _ لتعريف كائن باستخدام هذه الفئة بالكود: 
        Car car1 = new Car();
            car1.Type = "BMW";
            car1.Price = 10000;
            car1.MilesDrive = 105;
            car1.Owner = "Ahmed";
*/
/* structures يتم استخدام الهياكل إذا أردنا إنشاء كائنات لها نفس الخصائص */
// مثال على السيارة باستخدام الهياكل:
struct Car{
    int number;
    int year;
    char name[8];
    string Owner;
}BMWCar; // ملاحظة يجب وضع فاصلة منقوطة بعد الأقواس المجعدة للهياكل والبيانات

// مثال على فئة الطالب البيانات العامة والخاصة:
class Student{
    // تعني أن كل البيانات التي تأتي بعدها لا يمكن الوصول إليها من خارج هذه الفئة private
    private:
    int Password;
    void AddPassword(int Password){
        this->Password = Password;
    }

    // تعني أن كل البيانات التي تأتي بعدها يمكن الوصول إليها من خارج هذه الفئة public
    public:
    // الخصائص
    int StuID;
    string StuName;

    // الطرق
    void AddIDName(int StuID, string StuName){
        // تعني أن هذا المتغير هو ليس في هذه الدالة وإنما هو موجود في الفئة بشكل عام this->
        this->StuID = StuID;
        this->StuName = StuName;

        // encapsulation التغليف
        AddPassword(000000000);
    }
};

// construction and destroy البناء والتدمير
class constdes{
    public:
    int number;
    double price;
    // تستخدم لتجعل استقبال القيم يكون مترافقا مع إنشاء الكائن (name of class اسم الفئة)
    constdes(int number, double price){
        this->number = number;
        this->price = price;
    }
    // تستخدم لتدمير الكائن ~ (name of class اسم الفئة)
    ~ constdes(){
        cout << number << "\t/\t" << price << "\t/\tthe class deid" << endl;
    }
};

int main(){
    // Car BMWarr[any value] أيضا على الشكل Car ويمكن تعريف مصفوفة بنوع البيانات الجديد (Car BMW) الآن بالشكل Car يمكن تعريف متغير من نوع البيانات
    BMWCar.number = 5197;
    BMWCar.year = 2020;
    strcpy(BMWCar.name, "BMW");
    BMWCar.Owner = "Ahmed";
    cout << BMWCar.number << "\t/\t" << BMWCar.name << "  " << BMWCar.year << "  /\t" << BMWCar.Owner << endl;

    Student Student1;
    int ID = 28;
    string name = "Ahmed";
    Student1.AddIDName(ID, name);
    cout << Student1.StuID << "\t/\t" << Student1.StuName << endl;

    constdes constructiondestroy = constdes(15, 15.789);

    return 0;
}
					//TASK 1

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	cout<<"Enter length of array : ";
//	int n;
//	cin>>n;
//	int arr[n]={};
//	double sum;
//	cout<<"Enter the values of array : \n";
//	for(int i=0;i<n;++i){
//		cin>>arr[i];
//	}	
//	for(int j=0;j<n;++j){
//		sum+=arr[j];
//	}
//	cout<<"The average of the following numbers is "<<sum/n;
//	
//	return 0;
//}

					//TASK 2

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[5]={},min;
//	cout<<"Enter values of array : \n";
//	for(int i=0;i<5;++i){
//		cin>>arr[i];
//	}
//	cout<<"Values before sorting : \n";
//	for(int a=0;a<5;++a){
//		cout<<arr[a]<<"\t";
//		}
//	cout<<endl;
//	for(int i=0;i<5;++i){
//		for(int j=0;j<(5-1);++j){
//			if(arr[j]>arr[j+1]){
//				min	= arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = min;
//			}
//		}
//	}
//	cout<<"Values after sorting : \n";
//	for(int k=0;k<5;++k){
//		cout<<arr[k]<<"\t";
//	}
//	return 0;
//}

					//TASK 3

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[5]={},min;
//	cout<<"Enter values of array : \n";
//	for(int i=0;i<5;++i){
//		cin>>arr[i];
//	}
//	cout<<"Values before sorting : \n";
//	for(int a=0;a<5;++a){
//		cout<<arr[a]<<"\t";
//		}
//		cout<<endl;
//		for (int i = 0; i<5; ++i){
//        min = arr[i];
//        for (int j = i; j < 5; ++j){
//            if (min > arr[j]){
//                min = arr[j];
//                arr[j] = arr[i];
//                arr[i] = min;
//            }
//        }
//    }
//    cout<<"Values after sorting : \n";
//		for(int k=0;k<5;++k){
//			cout<<arr[k]<<"\t";
//		}
//		
//		return 0;
//}

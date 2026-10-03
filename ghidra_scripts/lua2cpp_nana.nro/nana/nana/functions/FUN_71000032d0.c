
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000032d0(L2CFighterNana *this,L2CValue *return_value)

{
  uint uVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Fighter *pFVar4;
  L2CValue *in_x1;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack112,in_x1);
  lib::L2CValue::L2CValue((L2CValue *)return_value,aLStack112);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,3);
  uVar1 = lib::L2CValue::as_integer(pLVar2);
  uVar1 = app::sv_battle_object::kind(uVar1);
  lib::L2CValue::L2CValue(aLStack80,uVar1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_NANA);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) goto LAB_71000036b4;
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,4);
  pFVar4 = (Fighter *)lib::L2CValue::as_pointer(pLVar2);
  uVar3 = app::FighterSpecializer_Popo::get_partner_motion_kind(pFVar4);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96), (uVar3 & 1) != 0)) {
    lib::L2CValue::L2CValue(aLStack64,0xbe41a3e99);
    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xb7d136f23);
      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xb0a145fb5);
        uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0xaef48d400);
          uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0xa764185ba);
            uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,0xa0146b52c);
              uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar3 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack64,0xb7dc027b4);
                uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
                if ((uVar3 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack64,0xbe4c9760e);
                  uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
                  lib::L2CValue::~L2CValue(aLStack64);
                  if ((uVar3 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack64,0xb93ce4698);
                    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
                    lib::L2CValue::~L2CValue(aLStack64);
                    if ((uVar3 & 1) == 0) goto LAB_71000036ac;
                    lib::L2CValue::L2CValue(aLStack64,0xb7dc027b4);
                    lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
                  }
                  else {
                    lib::L2CValue::L2CValue(aLStack64,0xb93ce4698);
                    lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
                  }
                }
                else {
                  lib::L2CValue::L2CValue(aLStack64,0xbe4c9760e);
                  lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack64,0xaef48d400);
                lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack64,0xa0146b52c);
              lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,0xa764185ba);
            lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,0xbe41a3e99);
          lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0xb0a145fb5);
        lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xb7d136f23);
      lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
LAB_71000036ac:
  lib::L2CValue::~L2CValue(aLStack96);
LAB_71000036b4:
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}


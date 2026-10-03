
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100003ef0(L2CFighterNana *this,L2CValue *return_value)

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
  if ((uVar3 & 1) == 0) goto LAB_7100004088;
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,4);
  pFVar4 = (Fighter *)lib::L2CValue::as_pointer(pLVar2);
  uVar3 = app::FighterSpecializer_Popo::get_partner_motion_kind(pFVar4);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = lib::L2CValue::operator==(aLStack112,aLStack96), (uVar3 & 1) != 0)) {
    lib::L2CValue::L2CValue(aLStack64,0xdb2dd5117);
    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xdd86d71e5);
      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) goto LAB_7100004080;
      lib::L2CValue::L2CValue(aLStack64,0xebd6af51d);
      lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xeeeb3d60d);
      lib::L2CValue::operator=((L2CValue *)return_value,aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack64);
  }
LAB_7100004080:
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100004088:
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}


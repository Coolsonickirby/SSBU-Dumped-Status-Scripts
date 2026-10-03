
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001be40(L2CFighterCloud *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      this_00 = &this->globalTable;
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
LAB_710001bfac:
        pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar2 & 1) != 0) goto LAB_710001bfe4;
        pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar2 & 1) == 0) goto LAB_710001bfec;
      }
      else {
        pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) goto LAB_710001bfac;
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack80,false);
      lib::L2CValue::L2CValue(aLStack96,0x10ef97f71f);
      lib::L2CValue::L2CValue(aLStack112,0x146e22785f);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      FUN_7100018920(this,aLStack80,aLStack96,aLStack112,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_710001bed8;
    }
LAB_710001bfe4:
    pLVar3 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_KIND_SPECIAL_LW_CHARGE);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_710001bed8:
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar3 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar3);
LAB_710001bfec:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


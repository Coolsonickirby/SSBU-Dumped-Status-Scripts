
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100210db0(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  int iVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) goto LAB_7100210e14;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    iVar4 = 1;
  }
  else {
LAB_7100210e14:
    iVar4 = 0;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}


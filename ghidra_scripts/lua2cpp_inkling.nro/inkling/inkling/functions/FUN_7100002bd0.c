
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100002bd0(L2CFighterInkling *this,L2CValue *return_value)

{
  uint uVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,2);
  uVar1 = lib::L2CValue::as_integer(pLVar3);
  iVar2 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_KIND_CHARGE_INK_START);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,false);
      goto LAB_7100002cf4;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,true);
LAB_7100002cf4:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}


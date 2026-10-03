
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100014ae0(L2CFighterShulk *this,L2CValue *return_value)

{
  L2CValue *this_00;
  ulong uVar1;
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHULK_STATUS_KIND_SPECIAL_HI_ADD);
  uVar1 = lib::L2CValue::operator==(this_00,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lua2cpp::L2CFighterCommon::super_jump_punch_reset_common_condition(this);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  }
  return;
}


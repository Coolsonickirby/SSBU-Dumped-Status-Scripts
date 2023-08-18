
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterChrom::status::FinalAttack_init(L2CFighterChrom *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  iVar3 = _FIGHTER_ROY_FINAL_INFO_NUM_MAX;
  if (0 < _FIGHTER_ROY_FINAL_INFO_NUM_MAX) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_STATUS_FINAL_WORK_INT_INFO_TASK_ID);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack144,0xc6039cf82);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,iVar1);
      lib::L2CValue::L2CValue(aLStack160,iVar4 + _FIGHTER_ROY_STATUS_FINAL_WORK_INT_INFO_DISP_COUNT)
      ;
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROY_STATUS_FINAL_WORK_INT_INFO_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


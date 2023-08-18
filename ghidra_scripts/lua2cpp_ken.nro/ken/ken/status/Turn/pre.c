
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKen::status::Turn_pre(L2CFighterKen *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_TURN);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_WALK_BACK);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710002c71c;
    }
  }
  lua2cpp::L2CFighterCommon::status_pre_Turn(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002c71c:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}


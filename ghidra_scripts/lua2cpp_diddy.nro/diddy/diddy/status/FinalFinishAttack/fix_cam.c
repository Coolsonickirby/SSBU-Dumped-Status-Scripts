
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalFinishAttack_fix_cam(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_GENERATE_EXPLODE_FLY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_GENERATE_EXPLODE_FLY_WAIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      bVar1 = app::lua_bind::BattleObjectSlow__is_adjust_impl(FIGHTER_STATUS_AIR_LASSO_BODY_FLIP_X);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar2 & 1U) == 0) goto LAB_710000851c;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_GENERATE_EXPLODE_FLY);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_GENERATE_EXPLODE_FLY_WAIT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_GAME);
      lib::L2CValue::L2CValue(aLStack80,0x1579e04016);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar3,HVar6,-1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
      lib::L2CValue::L2CValue(aLStack80,0x1762df801a);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar3,HVar6,-1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_SOUND);
      lib::L2CValue::L2CValue(aLStack80,0x16854e1b3a);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                (this->moduleAccessor,iVar3,HVar6,-1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator_(pLVar7,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_FINAL_CLEAR_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack64);
      pLVar7 = aLStack80;
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_GENERATE_EXPLODE_FLY_WAIT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      pLVar7 = aLStack64;
    }
    lib::L2CValue::_L2CValue(pLVar7);
  }
LAB_710000851c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


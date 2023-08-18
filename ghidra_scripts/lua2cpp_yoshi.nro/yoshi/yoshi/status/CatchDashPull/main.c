
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::CatchDashPull_main(L2CFighterYoshi *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  Hash40 HVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CATCH_TURN);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack80,0x1287c399ec);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar1,HVar3,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xa02480224);
  lua2cpp::L2CFighterCommon::status_CatchPull_common(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,CatchDashPull_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}


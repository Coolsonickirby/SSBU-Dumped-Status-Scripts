
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKamui::status::Landing_main(L2CFighterKamui *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::status_LandingSub(this);
  lua2cpp::L2CFighterCommon::status_LandingStiffness(this);
  lua2cpp::L2CFighterCommon::sub_landing_start_check_damage_face(this);
  HVar2 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,HVar2);
  lib::L2CValue::L2CValue(aLStack64,0xdc81fdc09);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xdc81fdc09);
      lib::L2CValue::L2CValue(aLStack112,aLStack80);
      lua2cpp::L2CFighterCommon::sub_get_landing_motion_rate(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      fVar4 = (float)lib::L2CValue::as_number(aLStack64);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar4);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack64,Landing_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}


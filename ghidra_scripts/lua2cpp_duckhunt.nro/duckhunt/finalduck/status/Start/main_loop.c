
void __thiscall
L2CWeaponDuckhuntFinalduck::status::Start_main_loop
          (L2CWeaponDuckhuntFinalduck *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  Hash40 HVar4;
  BattleObjectModuleAccessor **ppBVar5;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::sv_information::is_flat_stage();
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::L2CValue(aLStack64,0.01);
    lib::L2CValue::operator_(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,1.0);
    lib::L2CValue::operator_(aLStack64,aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  ppBVar5 = &this->moduleAccessor;
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar5);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar5);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar3 = lib::L2CValue::operator__(aLStack64,aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x79fe4c091);
      lib::L2CValue::operator_(aLStack80,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x765ebfdf2);
      lib::L2CValue::operator_(aLStack80,aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar5);
    lib::L2CValue::L2CValue(aLStack64,HVar4);
    uVar3 = lib::L2CValue::operator__(aLStack64,aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      HVar4 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar5,HVar4,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  return;
}


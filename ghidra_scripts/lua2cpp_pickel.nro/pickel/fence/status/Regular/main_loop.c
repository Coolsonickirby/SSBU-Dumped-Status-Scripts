
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelFence::status::Regular_main_loop(L2CWeaponPickelFence *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_FENCE_INSTANCE_WORK_ID_FLAG_BREAK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PICKEL_FENCE_INSTANCE_WORK_ID_FLAG_COMPLETE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xb55e69e65);
      lib::L2CValue::L2CValue(aLStack112,0x107ef04d97);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar9);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,uVar4);
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_PICKEL_FENCE_INSTANCE_WORK_ID_FLOAT_COMPLETE_RATIO)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::operator_(aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      lib::L2CValue::operator_(aLStack96,aLStack112);
      uVar6 = lib::L2CValue::operator_(aLStack80,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator_(aLStack112,aLStack80);
        lib::L2CValue::operator_(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,uVar4);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,uVar4);
        lib::L2CValue::operator_(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_PICKEL_FENCE_INSTANCE_WORK_ID_FLAG_COMPLETE);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar9,true);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar8 = aLStack80;
      goto LAB_7100094a24;
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_FENCE_INSTANCE_WORK_ID_INT_TYPE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,HVar5);
    lib::L2CValue::L2CValue(aLStack80,0xaeaab5d22);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xbcf5f54b4);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0xb26d412de);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::L2CValue(aLStack160,false);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack160);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar5,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
        goto LAB_71000949f8;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xa02480224);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar5,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
LAB_71000949f8:
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    pLVar8 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack96,0xcc88d7f55);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar5,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ANIMCMD_SOUND);
    lib::L2CValue::L2CValue(aLStack96,0xb1b819be3);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar5,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    pLVar8 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar8);
  pLVar8 = aLStack96;
LAB_7100094a24:
  lib::L2CValue::_L2CValue(pLVar8);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


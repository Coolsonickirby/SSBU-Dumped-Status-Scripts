
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterWiifit::status::SpecialLwSuccess_main(L2CFighterWiifit *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  ulong uVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  ppBVar7 = &this->moduleAccessor;
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
    uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x18875a0534);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,1.0);
      lib::L2CValue::L2CValue(aLStack400,false);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar8 = (float)lib::L2CValue::as_number(aLStack368);
      fVar9 = (float)lib::L2CValue::as_number(aLStack384);
      bVar1 = lib::L2CValue::as_bool(aLStack400);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar7,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x187d553857);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,1.0);
      lib::L2CValue::L2CValue(aLStack400,false);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar8 = (float)lib::L2CValue::as_number(aLStack368);
      fVar9 = (float)lib::L2CValue::as_number(aLStack384);
      bVar1 = lib::L2CValue::as_bool(aLStack400);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar7,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
    uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x14f52ae8ff);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,1.0);
      lib::L2CValue::L2CValue(aLStack400,false);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar8 = (float)lib::L2CValue::as_number(aLStack368);
      fVar9 = (float)lib::L2CValue::as_number(aLStack384);
      bVar1 = lib::L2CValue::as_bool(aLStack400);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar7,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x140f25d59c);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,1.0);
      lib::L2CValue::L2CValue(aLStack400,false);
      HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar8 = (float)lib::L2CValue::as_number(aLStack368);
      fVar9 = (float)lib::L2CValue::as_number(aLStack384);
      bVar1 = lib::L2CValue::as_bool(aLStack400);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar7,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
  uVar4 = lib::L2CValue::operator__(aLStack368,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack368,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack384,0.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack368);
    uVar4 = lib::L2CValue::as_number(aLStack384);
    lVar11 = lib::L2CValue::as_number(aLStack400);
    uVar10 = lib::L2CValue::as_number(aLStack416);
    local_60 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar10;
    app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar7,HVar5,(Vector3f *)&local_60,0,0);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_MA_MSC_CMD_EFFECT_EFFECT);
  lib::L2CValue::L2CValue(aLStack368,0x18d200a61a);
  lib::L2CValue::L2CValue(aLStack384,0x51a36341b);
  lib::L2CValue::L2CValue(aLStack400,0.0);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lib::L2CValue::L2CValue(aLStack480,0.0);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,1.0);
  lib::L2CValue::L2CValue(aLStack528,0.0);
  lib::L2CValue::L2CValue(aLStack544,0.0);
  lib::L2CValue::L2CValue(aLStack560,0.0);
  lib::L2CValue::L2CValue(aLStack576,0.0);
  lib::L2CValue::L2CValue(aLStack592,0.0);
  lib::L2CValue::L2CValue(aLStack608,0.0);
  lib::L2CValue::L2CValue(aLStack624,true);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack384);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack416);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack448);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack464);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack480);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack496);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack512);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack528);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack544);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack560);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack576);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack592);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack608);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack624);
  app::sv_module_access::effect(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack624);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_RATE);
  iVar2 = lib::L2CValue::as_integer(aLStack368);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x1e6ebeadc5);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x1e3f471698);
  uVar4 = lib::L2CValue::as_integer(aLStack448);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack416,fVar8);
  lib::L2CValue::operator_(aLStack368,aLStack416);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x1e3f471698);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::operator_(aLStack208,aLStack368);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x148e71ec03);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x202e02971b);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,iVar2);
  lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x207da48fff);
  uVar4 = lib::L2CValue::as_integer(aLStack448);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack416,iVar2);
  lib::L2CValue::operator_(aLStack368,aLStack416);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::operator_(aLStack176,aLStack112);
  lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x207da48fff);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,iVar2);
  lib::L2CValue::operator_(aLStack256,aLStack368);
  lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::operator_(aLStack192,aLStack256);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_WAZA_EFFECTIVE_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x1d3e7e27d6);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x1d19c540e7);
  uVar4 = lib::L2CValue::as_integer(aLStack448);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack416,fVar8);
  lib::L2CValue::operator_(aLStack368,aLStack416);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::operator_(aLStack224,aLStack112);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x1d19c540e7);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::operator_(aLStack272,aLStack368);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_ATTACK_RATE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack368);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x1d40887071);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x1d67331740);
  uVar4 = lib::L2CValue::as_integer(aLStack448);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack416,fVar8);
  lib::L2CValue::operator_(aLStack368,aLStack416);
  lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::operator_(aLStack240,aLStack112);
  lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x1d67331740);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::operator_(aLStack352,aLStack368);
  lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_DAMAGE_RATE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack368);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x1bc7bda96d);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x1b87f2d11b);
  uVar4 = lib::L2CValue::as_integer(aLStack448);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack416,fVar8);
  lib::L2CValue::operator_(aLStack368,aLStack416);
  lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::operator_(aLStack336,aLStack112);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x1b87f2d11b);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::operator_(aLStack320,aLStack368);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_WALK_RATE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack368);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x256d5d15ac);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x2569c72486);
  uVar4 = lib::L2CValue::as_integer(aLStack448);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack416,fVar8);
  lib::L2CValue::operator_(aLStack368,aLStack416);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::operator_(aLStack288,aLStack112);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x2569c72486);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar8);
  lib::L2CValue::operator_(aLStack304,aLStack368);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_DAMAGE_REACTION_MUL);
  fVar8 = (float)lib::L2CValue::as_number(aLStack368);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack400,0x20ec3fb7d9);
  uVar4 = lib::L2CValue::as_integer(aLStack384);
  uVar6 = lib::L2CValue::as_integer(aLStack400);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x20bf99af3d);
  uVar4 = lib::L2CValue::as_integer(aLStack448);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack416,fVar8);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack416);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::operator_(aLStack368,aLStack112);
  lib::L2CValue::L2CValue(aLStack416,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack448,0x20bf99af3d);
  uVar4 = lib::L2CValue::as_integer(aLStack416);
  uVar6 = lib::L2CValue::as_integer(aLStack448);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack400,fVar8);
  lib::L2CValue::operator_(aLStack384,aLStack400);
  lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_DASH_SPEED_MUL);
  fVar8 = (float)lib::L2CValue::as_number(aLStack400);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack416,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack448,0x1fa3e7a2c8);
  uVar4 = lib::L2CValue::as_integer(aLStack416);
  uVar6 = lib::L2CValue::as_integer(aLStack448);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::L2CValue(aLStack480,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack496,0x1fb66c763a);
  uVar4 = lib::L2CValue::as_integer(aLStack480);
  uVar6 = lib::L2CValue::as_integer(aLStack496);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack464,fVar8);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack464);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::operator_(aLStack400,aLStack112);
  lib::L2CValue::L2CValue(aLStack464,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack480,0x1fb66c763a);
  uVar4 = lib::L2CValue::as_integer(aLStack464);
  uVar6 = lib::L2CValue::as_integer(aLStack480);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack448,fVar8);
  lib::L2CValue::operator_(aLStack416,aLStack448);
  lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_RUN_SPEED_MUL);
  fVar8 = (float)lib::L2CValue::as_number(aLStack448);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack464,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack480,0x2206378e6d);
  uVar4 = lib::L2CValue::as_integer(aLStack464);
  uVar6 = lib::L2CValue::as_integer(aLStack480);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::L2CValue(aLStack512,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack528,0x222f497375);
  uVar4 = lib::L2CValue::as_integer(aLStack512);
  uVar6 = lib::L2CValue::as_integer(aLStack528);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack496,fVar8);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack496);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::operator_(aLStack448,aLStack112);
  lib::L2CValue::L2CValue(aLStack496,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack512,0x222f497375);
  uVar4 = lib::L2CValue::as_integer(aLStack496);
  uVar6 = lib::L2CValue::as_integer(aLStack512);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack480,fVar8);
  lib::L2CValue::operator_(aLStack464,aLStack480);
  lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_GROUND_BRAKE_MUL);
  fVar8 = (float)lib::L2CValue::as_number(aLStack480);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::L2CValue(aLStack496,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack512,0x213dc6f493);
  uVar4 = lib::L2CValue::as_integer(aLStack496);
  uVar6 = lib::L2CValue::as_integer(aLStack512);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::L2CValue(aLStack544,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack560,0x219af274ea);
  uVar4 = lib::L2CValue::as_integer(aLStack544);
  uVar6 = lib::L2CValue::as_integer(aLStack560);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack528,fVar8);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack528);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::operator_(aLStack480,aLStack112);
  lib::L2CValue::L2CValue(aLStack528,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack544,0x219af274ea);
  uVar4 = lib::L2CValue::as_integer(aLStack528);
  uVar6 = lib::L2CValue::as_integer(aLStack544);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack512,fVar8);
  lib::L2CValue::operator_(aLStack496,aLStack512);
  lib::L2CValue::operator_(aLStack496,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack496,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_AIR_SPEED_X_MUL);
  fVar8 = (float)lib::L2CValue::as_number(aLStack512);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::L2CValue(aLStack528,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack544,0x2100a6dd23);
  uVar4 = lib::L2CValue::as_integer(aLStack528);
  uVar6 = lib::L2CValue::as_integer(aLStack544);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::L2CValue(aLStack576,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack592,0x21a7925d5a);
  uVar4 = lib::L2CValue::as_integer(aLStack576);
  uVar6 = lib::L2CValue::as_integer(aLStack592);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack560,fVar8);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack560);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::operator_(aLStack512,aLStack112);
  lib::L2CValue::L2CValue(aLStack560,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack576,0x21a7925d5a);
  uVar4 = lib::L2CValue::as_integer(aLStack560);
  uVar6 = lib::L2CValue::as_integer(aLStack576);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack544,fVar8);
  lib::L2CValue::operator_(aLStack528,aLStack544);
  lib::L2CValue::operator_(aLStack528,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack528,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_EFFECTIVE_AIR_SPEED_Y_MUL);
  fVar8 = (float)lib::L2CValue::as_number(aLStack544);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack368,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack384,0x1c9e597b6c);
  uVar4 = lib::L2CValue::as_integer(aLStack368);
  uVar6 = lib::L2CValue::as_integer(aLStack384);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar7,uVar4,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _FIGHTER_WIIFIT_INSTANCE_WORK_ID_INT_SPECIAL_LW_WAZA_RESTORE_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_WAZA_RATE);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  iVar2 = lib::L2CValue::as_integer(aLStack368);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack656,&DAT_71000107e0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack656);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoClayrocket::status::Fly_main_loop
          (L2CWeaponMurabitoClayrocket *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  ulong uVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
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
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  ppBVar8 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    FUN_710002edf0(aLStack96,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100032340;
    }
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack240,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack240);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
    bVar2 = lib::L2CValue::operator_cast_to_bool(this_00);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100032340;
    }
  }
  lib::L2CValue::operator_(aLStack256,aLStack240);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_DETACH);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_GET_OFF);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_RIDE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_DETACH);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x10d78ab4d3);
    lib::L2CValue::L2CValue(aLStack112,0x10aa0a1e31);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack288,fVar9);
    FUN_710002deb0(this,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_CLAYROCKET_STATUS_WORK_INT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_MURABITO_CLAYROCKET_STATUS_WORK_INT_END_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  uVar5 = lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,0x3c);
    FUN_710002db60(this,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_MURABITO_CLAYROCKET_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack336,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100032340;
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_CLAYROCKET_STATUS_WORK_INT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack96,2);
  uVar5 = lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_CLAYROCKET_STATUS_WORK_FLAG_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    FUN_710002f120(aLStack352,this);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DIRECTION_X);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator_(aLStack272,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLOAT_DIRECTION_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    iVar3 = app::lua_bind::GroundModule__get_touch_flag_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::operator_(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack368,aLStack192);
      lib::L2CValue::L2CValue(aLStack384,aLStack272);
      lib::L2CValue::L2CValue(aLStack400,aLStack208);
      FUN_710002f7d0(aLStack112,this,aLStack368,aLStack384,aLStack400);
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100032340;
      }
      lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_UP);
      lib::L2CValue::operator_(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::operator_(aLStack224,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x3c13da0448);
        lib::L2CValue::L2CValue(aLStack112,-0.5);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_STATUS_WORK_FLAG_FALL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack432,aLStack272);
    lib::L2CValue::L2CValue(aLStack448,aLStack208);
    FUN_7100030620(this,aLStack432,aLStack448);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
  }
  lib::L2CValue::L2CValue(aLStack464,aLStack240);
  FUN_7100030e30(aLStack96,this,aLStack464);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack464);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack480,0);
  FUN_710002db60(this,aLStack480);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_CONTROL_SPEED_NORMAL);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_RIDE);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_FLAG_GET_OFF);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_CONTROL_SPEED_NORMAL);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      goto LAB_71000320ec;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0.2);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    uVar5 = lib::L2CValue::operator_(aLStack128,aLStack160);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::operator_(aLStack128);
      uVar5 = lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) goto LAB_71000320f4;
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_CONTROL_SPEED_POSITIVE);
        lib::L2CValue::operator_(aLStack144,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_CONTROL_SPEED_NEGATIVE);
        lib::L2CValue::operator_(aLStack144,aLStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_CONTROL_SPEED_NEGATIVE);
        lib::L2CValue::operator_(aLStack144,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_CLAYROCKET_CONTROL_SPEED_POSITIVE);
        lib::L2CValue::operator_(aLStack144,aLStack96);
      }
    }
LAB_71000320ec:
    lib::L2CValue::_L2CValue(aLStack96);
  }
LAB_71000320f4:
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_INT_CONTROL_SPEED)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_MURABITO_CLAYROCKET_INSTANCE_WORK_ID_INT_CONTROL_SPEED);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack496,true);
  }
  else {
    lib::L2CValue::L2CValue(aLStack496,false);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack496,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack496);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack256,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_TYPE_MURABITO_CLAYROCKET_FLY);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  FUN_710002e110(aLStack96,this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x992990021);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar8,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100032340:
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}


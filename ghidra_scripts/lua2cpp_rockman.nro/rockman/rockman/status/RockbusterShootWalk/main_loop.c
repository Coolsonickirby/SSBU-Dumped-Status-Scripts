
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRockman::status::RockbusterShootWalk_main_loop
          (L2CFighterRockman *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::L2CValue(aLStack160,0xee2ec2860);
  lib::L2CValue::L2CValue(aLStack176,0);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::L2CValue(aLStack208,0xef53a098c);
  lib::L2CValue::L2CValue(aLStack224,0);
  uVar5 = lib::L2CValue::as_integer(aLStack208);
  uVar6 = lib::L2CValue::as_integer(aLStack224);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::L2CValue(aLStack256,0xea1225bca);
  lib::L2CValue::L2CValue(aLStack272,0);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  uVar6 = lib::L2CValue::as_integer(aLStack272);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack240,fVar8);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack320,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack336,0xef53a098c);
  uVar5 = lib::L2CValue::as_integer(aLStack320);
  uVar6 = lib::L2CValue::as_integer(aLStack336);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack304,fVar8);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
  lib::L2CValue::L2CValue(aLStack368,aLStack80);
  lib::L2CValue::L2CValue(aLStack384,true);
  lua2cpp::L2CFighterCommon::calc_walk_speed
            (this,(L2CValue)0x90,(L2CValue)0x70,(L2CValue)0x40,(L2CValue)0x10,(L2CValue)0xe0,
             (L2CValue)0xd0,(L2CValue)0xa0,SUB81(aLStack368,0),SUB81((ulong)aLStack368 >> 0x20,0));
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0xe85ddc2ee);
  lib::L2CValue::L2CValue(aLStack160,0x108b812cf4);
  lib::L2CValue::L2CValue(aLStack176,0xe95bcfaf7);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_WALK_WORK_FLOAT_SPEED);
  lib::L2CValue::L2CValue(aLStack224,aLStack80);
  lib::L2CValue::L2CValue(aLStack256,&DAT_7100007eb0);
  lua2cpp::L2CFighterCommon::set_walk_motion
            (this,(L2CValue)0x80,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x30,(L2CValue)0x20,
             (L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack320,false);
  lib::L2CValue::L2CValue(aLStack336,true);
  FUN_710000fec0(aLStack272,this,aLStack320,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack400,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((uVar5 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack400,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack400);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100013af8;
      }
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100013af8;
      }
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack432,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_WALK);
    iVar3 = lib::L2CValue::as_integer(aLStack432);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack416,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack416);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack432);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack432);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_WALK);
        lib::L2CValue::L2CValue(aLStack416,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100013af8;
      }
    }
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_AIR);
      lib::L2CValue::operator_(aLStack96,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::operator_(aLStack96,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,aLStack96);
    lib::L2CValue::L2CValue(aLStack416,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100013af8;
  }
  lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack416,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack416);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack416,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack416);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack416);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack432,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_PREV_ESCAPE);
      iVar3 = lib::L2CValue::as_integer(aLStack432);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack416,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack416,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack432);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack416,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,1);
        lib::L2CValue::operator_(aLStack416,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK
                  );
        iVar3 = lib::L2CValue::as_integer(aLStack432);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack432);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_JUMP_SQUAT);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
          lib::L2CValue::operator_(aLStack96,aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,aLStack96);
        lib::L2CValue::L2CValue(aLStack432,true);
        lua2cpp::L2CFighterCommon::change_status_jump_mini_attack_common
                  (this,(L2CValue)0xb0,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        lib::L2CValue::_L2CValue(aLStack416);
        goto LAB_7100013af8;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack432,_FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_PREV_ESCAPE);
  iVar3 = lib::L2CValue::as_integer(aLStack432);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack416,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack416,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack432);
  if ((uVar5 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_check_button_jump(this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack416,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack416);
    if ((uVar5 & 1) != 0) {
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_JUMP_SQUAT);
        lib::L2CValue::operator_(aLStack96,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
        lib::L2CValue::operator_(aLStack96,aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,aLStack96);
      lib::L2CValue::L2CValue(aLStack416,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100013af8;
    }
    lua2cpp::L2CFighterCommon::sub_check_button_frick(this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack416,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack416);
    if ((uVar5 & 1) != 0) {
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_JUMP_SQUAT);
        lib::L2CValue::operator_(aLStack96,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
        lib::L2CValue::operator_(aLStack96,aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,aLStack96);
      lib::L2CValue::L2CValue(aLStack416,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100013af8;
    }
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack416,fVar8);
  lib::L2CValue::operator_(pLVar7,aLStack416);
  lib::L2CValue::L2CValue(aLStack448,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack464,0xcf44ba9e5);
  uVar5 = lib::L2CValue::as_integer(aLStack448);
  uVar6 = lib::L2CValue::as_integer(aLStack464);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack432,fVar8);
  uVar5 = lib::L2CValue::operator_(aLStack80,aLStack432);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack416);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROCKMAN_STATUS_KIND_ROCKBUSTER_SHOOT_WAIT);
      lib::L2CValue::operator_(aLStack96,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::operator_(aLStack96,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,aLStack96);
    lib::L2CValue::L2CValue(aLStack416,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_7100013af8:
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}


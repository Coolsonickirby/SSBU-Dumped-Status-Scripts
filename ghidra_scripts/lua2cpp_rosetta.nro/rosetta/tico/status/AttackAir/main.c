
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::AttackAir_main(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  L2CValue *this_00;
  Hash40 HVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
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
  
  this_00 = aLStack304;
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_TRANSITION_SELF);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_PARENT_MOTION_KIND)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    lVar6 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,lVar6);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack96,0xc3a4e2597);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xc3495ada5);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xc33f869bc);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xdde67d935);
          uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xd40042152);
            lib::L2CValue::operator_(aLStack144,aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xdde67d935);
            lib::L2CValue::operator_(aLStack144,aLStack96);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xc33f869bc);
          lib::L2CValue::operator_(aLStack144,aLStack96);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xc3495ada5);
        lib::L2CValue::operator_(aLStack144,aLStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xc3a4e2597);
      lib::L2CValue::operator_(aLStack144,aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::operator_(aLStack256,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_ATTACK_LR);
      FUN_710002f4a0(aLStack112,this,aLStack128);
LAB_710001a4c0:
      lib::L2CValue::_L2CValue(aLStack112);
      this_00 = aLStack128;
      goto LAB_710001a4cc;
    }
    lib::L2CValue::L2CValue(aLStack96,0xc3495ada5);
    uVar4 = lib::L2CValue::operator__(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
LAB_710001a47c:
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_ATTACK_LR);
      FUN_710002f4a0(aLStack112,this,aLStack128);
      goto LAB_710001a4c0;
    }
    lib::L2CValue::L2CValue(aLStack96,0xc33f869bc);
    uVar4 = lib::L2CValue::operator__(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_710001a47c;
  }
  else {
    pLVar8 = (L2CValue *)0x0;
    lib::L2CValue::L2CValue(aLStack304,0);
    fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar8);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar8);
    lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack192,0x149771081d);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    uVar4 = lib::L2CValue::operator_(aLStack144,aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
LAB_710001a194:
      bVar1 = app::lua_bind::ControlModule__is_stick_side_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar4 = lib::L2CValue::operator__(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar4 = lib::L2CValue::operator__(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xd40042152);
          lib::L2CValue::operator_(aLStack304,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xdde67d935);
          lib::L2CValue::operator_(aLStack304,aLStack96);
        }
        goto LAB_710001a30c;
      }
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar9);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xc33f869bc);
        lib::L2CValue::operator_(aLStack304,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xc3495ada5);
        lib::L2CValue::operator_(aLStack304,aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar8 = aLStack176;
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack240,0x14e076388b);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      uVar4 = lib::L2CValue::operator_(aLStack160,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar4 & 1) == 0) goto LAB_710001a194;
      lib::L2CValue::L2CValue(aLStack96,0xc3a4e2597);
      lib::L2CValue::operator_(aLStack304,aLStack96);
LAB_710001a30c:
      pLVar8 = aLStack96;
    }
    lib::L2CValue::_L2CValue(pLVar8);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::operator_(aLStack256,aLStack304);
LAB_710001a4cc:
    lib::L2CValue::_L2CValue(this_00);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue(aLStack160,false);
  HVar7 = lib::L2CValue::as_hash(aLStack256);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  fVar10 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar4 = lib::L2CValue::operator__(aLStack288,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0xc3a4e2597);
  uVar4 = lib::L2CValue::operator__(aLStack256,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xc3495ada5);
    uVar4 = lib::L2CValue::operator__(aLStack256,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xc33f869bc);
      uVar4 = lib::L2CValue::operator__(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0xdde67d935);
        uVar4 = lib::L2CValue::operator__(aLStack256,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xd40042152);
          uVar4 = lib::L2CValue::operator__(aLStack256,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) goto LAB_710001a734;
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_LW);
          lib::L2CValue::operator_(aLStack272,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_HI);
          lib::L2CValue::operator_(aLStack272,aLStack96);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_B);
        lib::L2CValue::operator_(aLStack272,aLStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_F);
      lib::L2CValue::operator_(aLStack272,aLStack96);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_LOG_ATTACK_KIND_ATTACK_AIR_N);
    lib::L2CValue::operator_(aLStack272,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710001a734:
  lib::L2CValue::L2CValue(aLStack144,0x2ec01db90d);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_TRANSITION_SELF);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,AttackAir_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  return;
}


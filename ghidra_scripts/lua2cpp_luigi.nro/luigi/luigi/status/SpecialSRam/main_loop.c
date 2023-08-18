
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::SpecialSRam_main_loop(L2CFighterLuigi *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundTouchFlag GVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
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
  L2CValue aLStack80 [16];
  
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack416,_FIGHTER_LUIGI_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack432,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack432);
    pLVar5 = aLStack416;
    goto LAB_710000edcc;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_STATUS_SPECIAL_S_RAM_TRANSITION_TERM_ID_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    bVar1 = app::lua_bind::AttackModule__is_infliction_impl(*ppBVar9,0x7f);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_SPECIAL_S_RAM_FLAG_LAST_STRANS);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack448,_FIGHTER_LUIGI_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue(aLStack464,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack464);
      pLVar5 = aLStack448;
      goto LAB_710000edcc;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUIGI_STATUS_SPECIAL_S_RAM_TRANSITION_TERM_ID_GROUND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack480,_FIGHTER_LUIGI_STATUS_KIND_SPECIAL_S_END);
      lib::L2CValue::L2CValue(aLStack496,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack496);
      pLVar5 = aLStack480;
      goto LAB_710000edcc;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0);
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
  iVar3 = app::lua_bind::GroundModule__get_touch_flag_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack80,fVar10);
  lib::L2CValue::operator_(aLStack192,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUIGI_STATUS_SPECIAL_S_RAM_FLAG_GROUND_CHECK);
  iVar3 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack304);
  if ((bVar2 & 1U) == 0) {
LAB_710000e820:
    lib::L2CValue::L2CValue(aLStack320,_FIGHTER_LUIGI_STATUS_SPECIAL_S_CHARGE_FLAG_DISCHARGE);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack304);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack304);
      pLVar5 = aLStack320;
      goto LAB_710000ed64;
    }
    lib::L2CValue::L2CValue(aLStack368,_FIGHTER_LUIGI_STATUS_SPECIAL_S_RAM_FLAG_SET_ATTACK_POWER);
    iVar3 = lib::L2CValue::as_integer(aLStack368);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack352,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack352);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack336);
    if ((bVar2 & 1U) == 0) {
      bVar1 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack400,0);
      iVar3 = lib::L2CValue::as_integer(aLStack400);
      bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar9,iVar3,false);
      lib::L2CValue::L2CValue(aLStack384,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack384);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack400);
    }
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    if ((bVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack320,0xc75c684a4);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      uVar7 = lib::L2CValue::as_integer(aLStack320);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      lib::L2CValue::operator_(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack320,0x13a029afd1);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      uVar7 = lib::L2CValue::as_integer(aLStack320);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      lib::L2CValue::operator_(aLStack256,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUIGI_STATUS_SPECIAL_S_RAM_FLOAT_CHARGE);
      iVar3 = lib::L2CValue::as_integer(aLStack304);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      lib::L2CValue::L2CValue(aLStack336,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack352,0xca3dc30e5);
      uVar6 = lib::L2CValue::as_integer(aLStack336);
      uVar7 = lib::L2CValue::as_integer(aLStack352);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack320,fVar10);
      uVar6 = lib::L2CValue::operator__(aLStack320,aLStack80);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LUIGI_STATUS_SPECIAL_S_RAM_FLOAT_CHARGE);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack80,fVar10);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        pLVar5 = aLStack80;
      }
      else {
        lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack320,0xca3dc30e5);
        uVar6 = lib::L2CValue::as_integer(aLStack304);
        uVar7 = lib::L2CValue::as_integer(aLStack320);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack80,fVar10);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar5 = aLStack320;
      }
      lib::L2CValue::_L2CValue(pLVar5);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::operator_(aLStack256,aLStack160);
      lib::L2CValue::L2CValue(aLStack336,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack352,0xca3dc30e5);
      uVar6 = lib::L2CValue::as_integer(aLStack336);
      uVar7 = lib::L2CValue::as_integer(aLStack352);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack320,fVar10);
      lib::L2CValue::operator_(aLStack304,aLStack320);
      lib::L2CValue::operator_(aLStack240,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::operator_(aLStack240,aLStack96);
      lib::L2CValue::operator_(aLStack304,aLStack160);
      lib::L2CValue::operator_(aLStack272,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack80,10.0);
      lib::L2CValue::operator_(aLStack272,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::operator_(aLStack288,aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      fVar10 = (float)lib::L2CValue::as_number(aLStack288);
      app::lua_bind::AttackModule__set_power_mul_status_impl(*ppBVar9,fVar10);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_SPECIAL_S_RAM_FLAG_SET_ATTACK_POWER);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      goto LAB_710000ed60;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_LEFT);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack304);
    if ((bVar2 & 1U) == 0) {
LAB_710000e494:
      lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack320);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,1.0);
        uVar6 = lib::L2CValue::operator__(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        if ((uVar6 & 1) != 0) goto LAB_710000e4fc;
      }
      goto LAB_710000e820;
    }
    lib::L2CValue::L2CValue(aLStack80,-1.0);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_710000e494;
    lib::L2CValue::_L2CValue(aLStack304);
LAB_710000e4fc:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack304,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack304);
    fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar10);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack304);
    GVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_attachable_impl(*ppBVar9,GVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack336,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack352,0x99a7ac083);
      uVar6 = lib::L2CValue::as_integer(aLStack336);
      uVar7 = lib::L2CValue::as_integer(aLStack352);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack320,fVar10);
      lib::L2CValue::L2CValue(aLStack80,100.0);
      lib::L2CValue::operator_(aLStack320,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::operator_(aLStack176,aLStack304);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue(aLStack304,0x77a08c3fc);
      HVar8 = lib::L2CValue::as_hash(aLStack304);
      fVar10 = (float)app::sv_math::randf(HVar8,1.0);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      lib::L2CValue::operator_(aLStack208,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::L2CValue(aLStack320,aLStack144);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar6 = lib::L2CValue::operator_(aLStack320,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator_(aLStack320);
        lib::L2CValue::operator_(aLStack320,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack304,aLStack320);
      lib::L2CValue::L2CValue(aLStack336,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack352,0xce07c73da);
      uVar6 = lib::L2CValue::as_integer(aLStack336);
      uVar7 = lib::L2CValue::as_integer(aLStack352);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack304);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack304);
        pLVar5 = aLStack320;
LAB_710000ed2c:
        lib::L2CValue::_L2CValue(pLVar5);
      }
      else {
        uVar6 = lib::L2CValue::operator__(aLStack208,aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack320);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_LEFT);
          lib::L2CValue::operator_(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack304);
          lib::L2CValue::_L2CValue(aLStack304);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,1.0);
            uVar6 = lib::L2CValue::operator__(aLStack192,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_KIND_SPECIAL_S_WALL);
              lib::L2CValue::operator_(aLStack128,aLStack80);
              goto LAB_710000ee38;
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,-1.0);
            uVar6 = lib::L2CValue::operator__(aLStack192,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_KIND_SPECIAL_S_WALL);
              lib::L2CValue::operator_(aLStack128,aLStack80);
LAB_710000ee38:
              pLVar5 = aLStack80;
              goto LAB_710000ed2c;
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack80,aLStack128);
    lib::L2CValue::L2CValue(aLStack304,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xd0);
    lib::L2CValue::_L2CValue(aLStack304);
LAB_710000ed60:
    pLVar5 = aLStack80;
LAB_710000ed64:
    lib::L2CValue::_L2CValue(pLVar5);
  }
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
  pLVar5 = aLStack96;
LAB_710000edcc:
  lib::L2CValue::_L2CValue(pLVar5);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


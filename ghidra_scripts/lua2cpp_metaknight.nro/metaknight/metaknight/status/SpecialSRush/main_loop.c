
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::SpecialSRush_main_loop
          (L2CFighterMetaknight *this,L2CValue *return_value)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  GroundCorrectKind GVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *this_00;
  L2CAgent *pLVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [16];
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack192,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar15 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar15);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar15 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar15);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0x17170f4feb);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  uVar9 = lib::L2CValue::as_integer(aLStack112);
  iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack352,iVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,_SITUATION_KIND_GROUND);
  pLVar11 = (L2CValue *)auStack192;
  uVar8 = lib::L2CValue::operator__(pLVar10,pLVar11);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack192,GROUND_CORRECT_KIND_AIR);
    GVar7 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar7);
    lVar1 = -0xb0;
LAB_710001944c:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
  else {
    lib::L2CAgent::math_abs((L2CAgent *)auStack320,pLVar11);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
    pLVar10 = aLStack112;
    uVar8 = lib::L2CValue::operator_((L2CValue *)auStack192,pLVar10);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::_L2CValue(aLStack112);
LAB_7100018ea4:
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack128,GROUND_TOUCH_FLAG_DOWN);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,(float)uVar17);
      pLVar10 = (L2CValue *)(auStack192 + 0x10);
      lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator_(pLVar11,(L2CValue *)auStack192);
      lib::L2CValue::operator_(pLVar12,pLVar10);
      lib::L2CValue::_L2CValue(pLVar10);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      fVar15 = (float)lib::L2CValue::as_number(pLVar10);
      fVar16 = (float)lib::L2CValue::as_number(pLVar13);
      uVar17 = app::sv_math::vec2_normalize(fVar15,fVar16);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,(float)uVar17);
      pLVar10 = (L2CValue *)(auStack192 + 0x10);
      lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator_(pLVar11,(L2CValue *)auStack192);
      lib::L2CValue::operator_(pLVar12,pLVar10);
      lib::L2CValue::_L2CValue(pLVar10);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::L2CValue(aLStack400,(L2CValue *)auStack320);
      lib::L2CValue::L2CValue(aLStack416,(L2CValue *)auStack336);
      pLVar10 = aLStack416;
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,SUB81(pLVar10,0));
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
      fVar15 = (float)lib::L2CValue::as_number(pLVar11);
      fVar16 = (float)lib::L2CValue::as_number(this_00);
      uVar17 = app::sv_math::vec2_normalize(fVar15,fVar16);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,(float)uVar17);
      pLVar11 = (L2CValue *)(auStack192 + 0x10);
      lib::L2CValue::L2CValue(pLVar11,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator_(pLVar12,(L2CValue *)auStack192);
      lib::L2CValue::operator_(pLVar13,pLVar11);
      lib::L2CValue::_L2CValue(pLVar11);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      pLVar14 = (L2CAgent *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      lib::L2CAgent::math_atan(pLVar14,pLVar11,pLVar10);
      lib::L2CAgent::math_deg((L2CAgent *)auStack192,pLVar11);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      pLVar14 = (L2CAgent *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      fVar15 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack224,fVar15);
      lib::L2CValue::operator_(pLVar11,aLStack224);
      pLVar11 = aLStack208;
      lib::L2CAgent::math_atan(pLVar14,pLVar11,pLVar10);
      lib::L2CAgent::math_deg((L2CAgent *)auStack192,pLVar11);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack208,false);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)auStack192,(L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      if ((uVar8 & 1) == 0) {
        bVar3 = false;
LAB_71000192bc:
        lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)auStack320,(L2CValue *)auStack192);
        lib::L2CValue::_L2CValue((L2CValue *)auStack192);
        if ((uVar8 & 1) == 0) {
          if (bVar3) {
            pLVar10 = aLStack432;
            goto LAB_7100019370;
          }
        }
        else {
          lib::L2CValue::operator_(aLStack160);
          lib::L2CValue::L2CValue((L2CValue *)auStack192,90.0);
          lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack192);
          lib::L2CValue::_L2CValue((L2CValue *)auStack192);
          uVar8 = lib::L2CValue::operator__(aLStack240,aLStack224);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack224);
          if (bVar3) {
            lib::L2CValue::_L2CValue(aLStack432);
          }
          if ((uVar8 & 1) != 0) goto LAB_7100019348;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack192,90.0);
        lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack192);
        lib::L2CValue::_L2CValue((L2CValue *)auStack192);
        uVar8 = lib::L2CValue::operator__(aLStack160,aLStack432);
        if ((uVar8 & 1) == 0) {
          bVar3 = true;
          goto LAB_71000192bc;
        }
        lib::L2CValue::_L2CValue(aLStack432);
LAB_7100019348:
        lib::L2CValue::L2CValue((L2CValue *)auStack192,true);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)auStack192);
        pLVar10 = (L2CValue *)auStack192;
LAB_7100019370:
        lib::L2CValue::_L2CValue(pLVar10);
      }
      lib::L2CValue::L2CValue((L2CValue *)auStack192,false);
      uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      if ((uVar8 & 1) == 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
        uVar8 = lib::L2CValue::operator_(aLStack352,pLVar10);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack192,GROUND_CORRECT_KIND_GROUND);
          GVar7 = lib::L2CValue::as_integer((L2CValue *)auStack192);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar7);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)auStack192,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
          GVar7 = lib::L2CValue::as_integer((L2CValue *)auStack192);
          app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar7);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack192,GROUND_CORRECT_KIND_AIR);
        GVar7 = lib::L2CValue::as_integer((L2CValue *)auStack192);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar7);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar1 = -0x60;
      goto LAB_710001944c;
    }
    lib::L2CAgent::math_abs((L2CAgent *)auStack336,pLVar10);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)auStack192,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) != 0) goto LAB_7100018ea4;
  }
  bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,(bool)(bVar4 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  cVar2 = (char)&stack0xfffffffffffffff0;
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack192,_FIGHTER_METAKNIGHT_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar2 + 'P'),(L2CValue)(cVar2 + -0x60));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100019920;
  }
  iVar5 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,_FIGHTER_METAKNIGHT_STATUS_KIND_SPECIAL_S_RUSH);
  uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)(cVar2 + -0x80),(L2CValue)(cVar2 + 'p'))
    ;
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack208,_GROUND_TOUCH_FLAG_SIDE);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,(float)uVar17);
    pLVar10 = (L2CValue *)(auStack192 + 0x10);
    lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator_(pLVar11,(L2CValue *)auStack192);
    lib::L2CValue::operator_(pLVar12,pLVar10);
    lib::L2CValue::_L2CValue(pLVar10);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)(cVar2 + '0'),(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack256,_GROUND_TOUCH_FLAG_UP);
    uVar6 = lib::L2CValue::as_integer(aLStack256);
    uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,(float)uVar17);
    pLVar10 = (L2CValue *)(auStack192 + 0x10);
    lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar17 >> 0x20));
    lib::L2CValue::operator_(pLVar11,(L2CValue *)auStack192);
    lib::L2CValue::operator_(pLVar12,pLVar10);
    lib::L2CValue::_L2CValue(pLVar10);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
    uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    if ((uVar8 & 1) == 0) {
LAB_71000198dc:
      lib::L2CValue::L2CValue((L2CValue *)auStack192,aLStack128);
      FUN_7100019d70(this,auStack192);
LAB_71000198f4:
      pLVar10 = (L2CValue *)auStack192;
    }
    else {
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,1.0);
      uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      if ((uVar8 & 1) == 0) goto LAB_71000198dc;
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
      uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      if ((uVar8 & 1) == 0) {
LAB_710001995c:
        lib::L2CValue::L2CValue((L2CValue *)auStack192,aLStack208);
        FUN_7100019d70(this,auStack192);
        goto LAB_71000198f4;
      }
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,1.0);
      uVar8 = lib::L2CValue::operator__(pLVar10,(L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      if ((uVar8 & 1) == 0) goto LAB_710001995c;
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
      pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),GROUND_TOUCH_FLAG_DOWN);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack320 + 0x10));
      uVar17 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,(float)uVar17);
      pLVar10 = (L2CValue *)(auStack192 + 0x10);
      lib::L2CValue::L2CValue(pLVar10,(float)((ulong)uVar17 >> 0x20));
      lib::L2CValue::operator_(pLVar11,(L2CValue *)auStack192);
      lib::L2CValue::operator_(pLVar12,pLVar10);
      lib::L2CValue::_L2CValue(pLVar10);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)auStack192,aLStack256);
      FUN_7100019d70(this,auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      pLVar10 = aLStack256;
    }
    lib::L2CValue::_L2CValue(pLVar10);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100019920:
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  return;
}


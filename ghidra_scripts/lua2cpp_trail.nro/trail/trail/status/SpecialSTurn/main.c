
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialSTurn_main(L2CFighterTrail *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  L2CValue *this_00;
  L2CAgent *this_01;
  ulong uVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor *pBVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
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
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_TARGET_ID);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar13 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar13);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)auStack160);
  fVar14 = 0.0;
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_SEARCH_LR);
  fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar13,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50000000);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    uVar15 = app::FighterSpecializer_Trail::get_special_s_target_pos(uVar3);
    lib::L2CValue::L2CValue(aLStack256,(float)uVar15);
    lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::L2CValue(aLStack224,fVar14);
    FUN_7100024cc0(auStack176,this,aLStack256);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x187367db00);
    lib::L2CValue::L2CValue(aLStack272,0);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar9 = lib::L2CValue::as_integer(aLStack272);
    lVar6 = app::lua_bind::WorkModule__get_param_int64_impl(this->moduleAccessor,uVar5,uVar9);
    lib::L2CValue::L2CValue(aLStack208,lVar6);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    HVar7 = lib::L2CValue::as_hash(aLStack208);
    uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack352 + 0x10));
    lVar6 = lib::L2CValue::as_number((L2CValue *)auStack352);
    uVar3 = lib::L2CValue::as_number(aLStack368);
    local_60 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar6 << 0x20);
    uStack88 = (ulong)uVar3;
    app::lua_bind::ModelModule__joint_global_position_impl
              (this->moduleAccessor,HVar7,(Vector3f *)&local_60,true);
    lib::L2CValue::L2CValue(aLStack320,(float)local_60);
    lib::L2CValue::L2CValue(aLStack304,local_60._4_4_);
    lib::L2CValue::L2CValue(aLStack288,(float)uStack88);
    FUN_7100024cc0(aLStack272,this,aLStack320);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack176,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
    lib::L2CValue::operator_(pLVar10,pLVar8);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack176,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar10,pLVar8);
    pLVar10 = aLStack400;
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,SUB81(pLVar10,0));
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x1fbdb2615);
    fVar13 = (float)lib::L2CValue::as_number(pLVar8);
    fVar14 = (float)lib::L2CValue::as_number(this_00);
    bVar1 = app::sv_math::vec2_is_zero(fVar13,fVar14);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack352,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    if ((uVar5 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack160 + 0x10));
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
    lib::L2CAgent::math_atan(this_01,pLVar8,pLVar10);
    lib::L2CAgent::math_deg((L2CAgent *)auStack352,pLVar8);
    lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
      lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)auStack352);
      lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    }
    lib::L2CValue::L2CValue(aLStack416,(L2CValue *)auStack160);
    FUN_7100024ab0(auStack352,this,aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack352,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack416);
    if ((uVar5 & 1) != 0) {
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar5 = lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack352 + 0x10),0x18cdc1683)
        ;
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,pLVar10);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) goto LAB_7100024068;
        lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
LAB_7100024068:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack352);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar13,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_SEARCH_STICK)
    ;
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lVar6 = -0x100;
LAB_7100024108:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar6));
LAB_710002410c:
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack176,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
    lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue(aLStack192,(L2CValue *)auStack160);
    FUN_7100024ab0(auStack176,this,aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    puVar12 = &local_60;
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack176,(L2CValue *)puVar12);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar5 & 1) != 0) {
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,(L2CValue *)puVar12);
      lib::L2CAgent::math_cos((L2CAgent *)auStack176,(L2CValue *)puVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
LAB_7100024000:
        lVar6 = -0x50;
        goto LAB_7100024108;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_60);
        goto LAB_7100024000;
      }
      goto LAB_710002410c;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack176);
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack272,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0x13b363dc08);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)auStack160);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack272);
  }
  else {
    lib::L2CValue::L2CValue(aLStack368,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack432,0x138f6ee351);
    uVar5 = lib::L2CValue::as_integer(aLStack368);
    uVar9 = lib::L2CValue::as_integer(aLStack432);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar13);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x11b3447f8f);
      lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x15c5198b90);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
      goto LAB_7100024434;
    }
  }
  lib::L2CValue::L2CValue(aLStack272,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0x15b9567fd1);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)auStack160);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack272);
  }
  else {
    lib::L2CValue::L2CValue(aLStack368,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack432,0x15855b4088);
    uVar5 = lib::L2CValue::as_integer(aLStack368);
    uVar9 = lib::L2CValue::as_integer(aLStack432);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar13);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1308d33e4b);
      lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x177f59708d);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
      goto LAB_7100024434;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe86240325);
  lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x12c476f6ea);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
LAB_7100024434:
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack464,(L2CValue *)auStack176);
  lib::L2CValue::L2CValue(aLStack480,aLStack208);
  lib::L2CValue::L2CValue(aLStack496,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  uVar5 = lib::L2CValue::operator__((L2CValue *)(auStack160 + 0x10),aLStack128);
  if ((uVar5 & 1) == 0) {
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar10);
    app::FighterSpecializer_Trail::set_turn_special_s(pBVar11);
  }
  lib::L2CValue::L2CValue(aLStack272,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),0x116f193347);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack352 + 0x10));
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack352,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_LOCKONCURSOR_FRAME);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack352 + 0x10));
  lib::L2CValue::_L2CValue(aLStack272);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar5 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack528,false);
    FUN_7100024d80(aLStack512,this,aLStack528);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack528);
  }
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_7100024ee0);
  lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  FUN_7100022d80(this);
  lib::L2CValue::L2CValue(aLStack544,&DAT_7100024f40);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


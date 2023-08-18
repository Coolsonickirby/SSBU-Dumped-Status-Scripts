
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialLwEnd_init(L2CFighterRobot *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ItemKind IVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  FighterModuleAccessor *pFVar9;
  long lVar10;
  Hash40 HVar11;
  float fVar12;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_HOLD);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_LW_END);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710000c60c;
      app::LinkEvent::new_l2c_table();
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x15e2186994);
      lib::L2CValue::operator_(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,-1);
      FUN_7100012360(aLStack80,this,aLStack128,aLStack112);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_MISS);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xab6928cf2);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_GROUND);
        lVar10 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xe46c0e666);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_AIR);
        lVar10 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar10,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xfe64615db);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_GROUND);
        lVar10 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x13eddf980f);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_AIR);
        lVar10 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar10,iVar3);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
      HVar11 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar11);
      pLVar8 = aLStack80;
    }
    else {
      app::LinkEvent::new_l2c_table();
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack80,0x16542c3d1a);
      lib::L2CValue::operator_(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,-1);
      FUN_7100012360(aLStack80,this,aLStack128,aLStack112);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar8 = aLStack128;
    }
    lib::L2CValue::_L2CValue(pLVar8);
    pLVar8 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x106f411784);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack80,fVar12);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROBOT_STATUS_GYRO_WORK_FLOAT_CHARGY_MAX_VALUE);
    fVar12 = (float)lib::L2CValue::as_number(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      uVar4 = app::lua_bind::ItemModule__get_have_item_id_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack112,uVar4);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = app::sv_battle_object::kind(uVar4);
      lib::L2CValue::L2CValue(aLStack128,uVar4);
      lib::L2CValue::L2CValue(aLStack80,_ITEM_KIND_ROBOTGYRO);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::FighterSpecializer_Robot::is_ownered_item(pFVar9,uVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::ItemManager__remove_item_from_id_impl
                    (FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL,uVar4);
        }
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
    lib::L2CValue::L2CValue(aLStack112,_ITEM_KIND_ROBOTGYRO);
    uVar4 = lib::L2CValue::as_integer(pLVar8);
    IVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar6 = app::lua_bind::ItemManager__get_num_of_ownered_item_impl
                      (FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL,uVar4,IVar5);
    lib::L2CValue::L2CValue(aLStack80,uVar6);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0x78df12327);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    uVar6 = lib::L2CValue::operator_(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x15e78e15de);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_GROUND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x19eb4a7e0b);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_AIR);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_STATUS_GYRO_FLAG_MISS);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x10ef97f71f);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_GROUND);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x146e22785f);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ROBOT_STATUS_GYRO_WORK_INT_MOTION_KIND_AIR);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar8 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar8);
LAB_710000c60c:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}



/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::FinalWait_main_loop(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor *pBVar10;
  L2CValue *pLVar11;
  L2CValue *this_00;
  L2CValue *this_01;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uVar14;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined8 local_130;
  ulong uStack296;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 auStack144 [2];
  undefined8 auStack128 [2];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_130,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack208,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_130,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
LAB_7100026410:
    lib::L2CValue::L2CValue(aLStack208,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OCTOPUS);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_130);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    if ((bVar2 & 1U) == 0) goto LAB_7100026aac;
    lib::L2CValue::L2CValue(aLStack208,_LINK_NO_ARTICLE);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,uVar4);
    lib::L2CValue::_L2CValue(aLStack208);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    bVar1 = app::sv_battle_object::is_null(uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)&local_130);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack208);
      puVar12 = &local_130;
LAB_7100026aa0:
      lib::L2CValue::_L2CValue((L2CValue *)puVar12);
    }
    else {
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
      bVar1 = app::sv_battle_object::is_active(uVar4);
      lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack336);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_130);
      if ((bVar2 & 1U) != 0) {
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack128);
        pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar6 == (void *)0x0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack144,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)auStack144,pvVar6);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0xdec0a3c43);
        lib::L2CValue::L2CValue(aLStack96,0x4857fe845);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        uVar7 = lib::L2CValue::as_integer(aLStack96);
        lVar8 = app::lua_bind::WorkModule__get_param_int64_impl(this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack336,lVar8);
        lib::L2CValue::L2CValue(aLStack224,0);
        lib::L2CValue::L2CValue(aLStack240,0);
        lib::L2CValue::L2CValue(aLStack256,0);
        lib::L2CValue::L2CValue(aLStack272,true);
        HVar9 = lib::L2CValue::as_hash(aLStack336);
        uVar5 = lib::L2CValue::as_number(aLStack224);
        lVar8 = lib::L2CValue::as_number(aLStack240);
        uVar4 = lib::L2CValue::as_number(aLStack256);
        local_130 = uVar5 & 0xffffffff | lVar8 << 0x20;
        uStack296 = (ulong)uVar4;
        bVar1 = lib::L2CValue::as_bool(aLStack272);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack144);
        app::lua_bind::ModelModule__joint_global_position_impl
                  (pBVar10,HVar9,(Vector3f *)&local_130,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack208,(float)local_130);
        lib::L2CValue::L2CValue(aLStack192,local_130._4_4_);
        lib::L2CValue::L2CValue(aLStack176,(float)uStack296);
        FUN_710001de50(aLStack160,this,aLStack208);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        uVar14 = app::lua_bind::GroundModule__get_center_pos_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)&local_130,(float)uVar14);
        lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::L2CValue(aLStack336,(L2CValue *)&local_130);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack288);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack336);
        uVar14 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack336,(float)uVar14);
        lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack336);
        lib::L2CValue::L2CValue(aLStack96,aLStack320);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator_(aLStack240,aLStack256);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue((L2CValue *)&local_130);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack256,0xdec0a3c43);
        lib::L2CValue::L2CValue(aLStack272,0x8d8ad1dd1);
        uVar5 = lib::L2CValue::as_integer(aLStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack240,fVar13);
        lib::L2CValue::operator_(pLVar11,aLStack240);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
        lib::L2CValue::operator_(aLStack96,pLVar11);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack256,0xdec0a3c43);
        lib::L2CValue::L2CValue(aLStack272,0x8afaa2d47);
        uVar5 = lib::L2CValue::as_integer(aLStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack240,fVar13);
        lib::L2CValue::operator_(pLVar11,aLStack240);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
        lib::L2CValue::operator_(aLStack96,pLVar11);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
        uVar5 = lib::L2CValue::as_number(pLVar11);
        lVar8 = lib::L2CValue::as_number(this_00);
        uVar4 = lib::L2CValue::as_number(this_01);
        local_50 = uVar5 & 0xffffffff | lVar8 << 0x20;
        uStack72 = (ulong)uVar4;
        app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack160);
        puVar12 = auStack144;
        goto LAB_7100026aa0;
      }
    }
    puVar12 = auStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack208,false);
    uVar5 = lib::L2CValue::operator__(aLStack336,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack208,false);
      uVar5 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_130);
      if ((uVar5 & 1) == 0) goto LAB_7100026aac;
      goto LAB_7100026410;
    }
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack112);
    puVar12 = &local_130;
  }
  lib::L2CValue::_L2CValue((L2CValue *)puVar12);
LAB_7100026aac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


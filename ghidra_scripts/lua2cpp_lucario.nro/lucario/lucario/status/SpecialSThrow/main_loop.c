
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialSThrow_main_loop(L2CFighterLucario *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  Hash40 HVar11;
  L2CValue *this_01;
  L2CValue *this_02;
  BattleObjectModuleAccessor *pBVar12;
  code *pcVar13;
  long *plVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
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
  undefined8 local_90;
  ulong uStack136;
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack288,true);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar8 & 1) != 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack288,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack240,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((bVar3 & 1U) != 0) goto LAB_7100020aa4;
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack288,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar8 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((bVar3 & 1U) != 0) goto LAB_7100020aa4;
    }
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  this_00 = &this->globalTable;
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar3 & 1U) == 0) {
LAB_7100020158:
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack288,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LUCARIO_POWER_PUNCH_STATUS_WORK_ID_INT_FRAME);
      iVar5 = lib::L2CValue::as_integer(aLStack160);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar5);
      lib::L2CValue::L2CValue(aLStack288,1);
      uVar8 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack288,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)(cVar1 + -0x80));
        goto LAB_7100020228;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_LUCARIO_POWER_PUNCH_STATUS_WORK_ID_FLAG_CRITICAL_HIT);
    iVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack288,true);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_FLOAT_CURR_AURAPOWER);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack288,fVar15);
      lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack192,0x13c1348145);
      uVar8 = lib::L2CValue::as_integer(aLStack176);
      uVar10 = lib::L2CValue::as_integer(aLStack192);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar8,uVar10);
      lib::L2CValue::L2CValue(aLStack160,fVar15);
      uVar8 = lib::L2CValue::operator__(aLStack160,aLStack288);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,0x54f934137);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        HVar11 = lib::L2CValue::as_hash(aLStack176);
        uVar8 = lib::L2CValue::as_number(aLStack192);
        lVar18 = lib::L2CValue::as_number(aLStack208);
        uVar16 = lib::L2CValue::as_number(aLStack224);
        local_90 = uVar8 & 0xffffffff | lVar18 << 0x20;
        uStack136 = (ulong)uVar16;
        app::lua_bind::ModelModule__joint_global_position_impl
                  (this->moduleAccessor,HVar11,(Vector3f *)&local_90,true);
        lib::L2CValue::L2CValue(aLStack288,(float)local_90);
        lib::L2CValue::L2CValue(aLStack272,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack256,(float)uStack136);
        FUN_7100004670(aLStack160,this,aLStack288);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,LINK_NO_CAPTURE);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        uVar16 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack176,uVar16);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KIND_LUCARIO);
        lib::L2CValue::L2CValue(aLStack208,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack224,_LINK_NO_NONE);
        lib::L2CValue::L2CValue(aLStack320,true);
        lib::L2CValue::L2CValue(aLStack336,0);
        lib::L2CValue::L2CValue(aLStack352,true);
        pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
        uVar16 = lib::L2CValue::as_integer(aLStack176);
        uVar8 = lib::L2CValue::as_number(this_01);
        uVar17 = lib::L2CValue::as_number(this_02);
        local_90 = uVar8 & 0xffffffff | (ulong)uVar17 << 0x20;
        uStack136 = 0;
        iVar5 = lib::L2CValue::as_integer(aLStack192);
        HVar11 = lib::L2CValue::as_hash(aLStack208);
        iVar6 = lib::L2CValue::as_integer(aLStack224);
        bVar2 = lib::L2CValue::as_bool(aLStack320);
        iVar7 = lib::L2CValue::as_integer(aLStack336);
        bVar4 = lib::L2CValue::as_bool(aLStack352);
        bVar2 = app::FighterUtil::request_critical_hit_cut_in_force
                          (pBVar12,uVar16,(Vector2f *)&local_90,iVar5,HVar11,iVar6,(bool)(bVar2 & 1)
                           ,iVar7,(bool)(bVar4 & 1));
        lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_FIGHTER_LUCARIO_POWER_PUNCH_STATUS_WORK_ID_FLAG_CRITICAL_HIT
                );
      iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_LUCARIO_POWER_PUNCH_STATUS_WORK_ID_FLAG_THROW_DONE);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_LUCARIO_POWER_PUNCH_STATUS_WORK_ID_FLAG_REQUEST_THROW)
    ;
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::operator_(aLStack160);
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    if ((bVar3 & 1U) == 0) {
      lVar18 = -0x80;
LAB_7100020998:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar18));
    }
    else {
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((bVar3 & 1U) != 0) {
        app::LinkEventThrow::new_l2c_table();
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x105a79305b);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x54f934137);
        lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue(aLStack224,LINK_NO_CAPTURE);
        iVar5 = lib::L2CValue::as_integer(aLStack224);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x11f63699bf);
        pcVar13 = (code *)lib::L2CValue::as_pointer(pLVar9);
        plVar14 = (long *)(*pcVar13)();
        app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar14,aLStack192);
        app::lua_bind::LinkModule__send_event_nodes_struct_impl
                  (this->moduleAccessor,iVar5,(LinkEvent *)plVar14,0);
        app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar14);
        lib::L2CValue::L2CValue(aLStack208,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        (**(code **)(*plVar14 + 8))(plVar14);
        lib::L2CValue::operator_(aLStack192,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::L2CValue(aLStack208,LINK_NO_CAPTURE);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        uVar16 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,uVar16);
        lib::L2CValue::L2CValue(aLStack224,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        iVar6 = lib::L2CValue::as_integer(aLStack224);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack208);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xa5f8ae909);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
        iVar5 = lib::L2CValue::as_integer(pLVar9);
        iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x7ce0a07b2);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
        iVar5 = lib::L2CValue::as_integer(pLVar9);
        iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0xc9ed2d425);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
        fVar15 = (float)lib::L2CValue::as_number(pLVar9);
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar15,iVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_FIGHTER_LUCARIO_POWER_PUNCH_STATUS_WORK_ID_FLAG_THROW_DONE
                  );
        iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lVar18 = -0xb0;
        goto LAB_7100020998;
      }
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    uVar8 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar8 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar8 & 1) == 0) {
LAB_7100020a64:
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar8 & 1) != 0) goto LAB_7100020a9c;
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar8 & 1) == 0) goto LAB_7100020aa4;
      }
      else {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,SITUATION_KIND_AIR);
        uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar8 & 1) == 0) goto LAB_7100020a64;
        lib::L2CValue::_L2CValue(aLStack160);
      }
      FUN_710001fdd0(this);
      goto LAB_7100020aa4;
    }
LAB_7100020a9c:
    pLVar9 = aLStack160;
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack288,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar8 & 1) == 0) goto LAB_7100020158;
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_WAIT);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)(cVar1 + -0x80));
LAB_7100020228:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar9 = aLStack288;
  }
  lib::L2CValue::_L2CValue(pLVar9);
LAB_7100020aa4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


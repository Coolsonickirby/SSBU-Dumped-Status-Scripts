
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSheik::status::FinalFinish_main_loop(L2CFighterSheik *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  void *pvVar11;
  BattleObjectModuleAccessor *pBVar12;
  int iVar13;
  float fVar14;
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack136,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack200,true);
  uVar7 = lib::L2CValue::operator__(aLStack136,aLStack200);
  lib::L2CValue::_L2CValue(aLStack200);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack136);
LAB_7100019d8c:
    lib::L2CValue::L2CValue(aLStack136,_FIGHTER_SHEIK_STATUS_FINAL_FLAG_FINISH);
    iVar4 = lib::L2CValue::as_integer(aLStack136);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack200,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack200);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((bVar3 & 1U) != 0) {
      bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack136,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack200,true);
      uVar7 = lib::L2CValue::operator__(aLStack136,aLStack200);
      lib::L2CValue::_L2CValue(aLStack200);
      if ((uVar7 & 1) == 0) {
        this_00 = &this->globalTable;
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack200,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar9,aLStack200);
        lib::L2CValue::_L2CValue(aLStack200);
        if ((uVar7 & 1) != 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack200,SITUATION_KIND_AIR);
          uVar7 = lib::L2CValue::operator__(pLVar9,aLStack200);
          lib::L2CValue::_L2CValue(aLStack200);
          if ((uVar7 & 1) != 0) goto LAB_7100019e20;
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack200,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar9,aLStack200);
        lib::L2CValue::_L2CValue(aLStack200);
        if ((uVar7 & 1) == 0) {
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack200,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar9,aLStack200);
          lib::L2CValue::_L2CValue(aLStack200);
          lib::L2CValue::_L2CValue(aLStack136);
          if ((uVar7 & 1) != 0) goto LAB_7100019e28;
        }
        else {
          lib::L2CValue::_L2CValue(aLStack136);
        }
      }
      else {
LAB_7100019e20:
        lib::L2CValue::_L2CValue(aLStack136);
LAB_7100019e28:
        FUN_7100019510(this);
      }
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack200,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack200);
    lib::L2CValue::_L2CValue(aLStack200);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack344,_FIGHTER_SHEIK_STATUS_KIND_FINAL_END);
      lib::L2CValue::L2CValue(aLStack360,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa8,(L2CValue)0x98);
      lib::L2CValue::_L2CValue(aLStack360);
      lib::L2CValue::_L2CValue(aLStack344);
    }
    pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack200,*pfVar8);
    lib::L2CValue::L2CValue(aLStack184,pfVar8[1]);
    lib::L2CValue::L2CValue(aLStack168,pfVar8[2]);
    FUN_7100019a20(aLStack152,this,aLStack200);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack200);
    fVar14 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack216,fVar14);
    fVar14 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack232,fVar14);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack296,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack312,0x17f255db69);
    uVar7 = lib::L2CValue::as_integer(aLStack296);
    uVar10 = lib::L2CValue::as_integer(aLStack312);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack280,fVar14);
    lib::L2CValue::operator_(aLStack280,aLStack216);
    lib::L2CValue::operator_(aLStack264,aLStack232);
    lib::L2CValue::operator_(pLVar9,aLStack248);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    lib::L2CValue::operator_(pLVar9,aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack280,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack296,0x178552ebff);
    uVar7 = lib::L2CValue::as_integer(aLStack280);
    uVar10 = lib::L2CValue::as_integer(aLStack296);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack264,fVar14);
    lib::L2CValue::operator_(aLStack264,aLStack216);
    lib::L2CValue::operator_(pLVar9,aLStack248);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar9,aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::L2CValue(aLStack248);
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_SHEIK_STATUS_FINAL_FLAG_FINISH);
    iVar4 = lib::L2CValue::as_integer(aLStack264);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack264);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack264,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack280,0x144f532850);
      uVar7 = lib::L2CValue::as_integer(aLStack264);
      uVar10 = lib::L2CValue::as_integer(aLStack280);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar10);
      lib::L2CValue::L2CValue(aLStack136,fVar14);
      lib::L2CValue::operator_(aLStack248,aLStack136);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack280);
      pLVar9 = aLStack264;
    }
    else {
      lib::L2CValue::L2CValue(aLStack136,0.0);
      lib::L2CValue::operator_(aLStack248,aLStack136);
      pLVar9 = aLStack136;
    }
    lib::L2CValue::_L2CValue(pLVar9);
    lib::L2CValue::L2CValue(aLStack264,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM);
    iVar4 = lib::L2CValue::as_integer(aLStack264);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack136,iVar4);
    lib::L2CValue::_L2CValue(aLStack264);
    iVar4 = lib::L2CValue::as_integer(aLStack136);
    if (0 < iVar4) {
      iVar13 = 0;
      do {
        lib::L2CValue::L2CValue
                  (aLStack280,iVar13 + _FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_FINAL_TARGET_OBJECT_ID_0)
        ;
        iVar5 = lib::L2CValue::as_integer(aLStack280);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack264,iVar5);
        lib::L2CValue::_L2CValue(aLStack280);
        uVar6 = lib::L2CValue::as_integer(aLStack264);
        bVar2 = app::sv_battle_object::is_null(uVar6);
        lib::L2CValue::L2CValue(aLStack296,(bool)(bVar2 & 1));
        lib::L2CValue::operator_(aLStack296);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack280);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack280);
          pLVar9 = aLStack296;
LAB_710001a51c:
          lib::L2CValue::_L2CValue(pLVar9);
        }
        else {
          uVar6 = lib::L2CValue::as_integer(aLStack264);
          bVar2 = app::sv_battle_object::is_active(uVar6);
          lib::L2CValue::L2CValue(aLStack312,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack312);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack280);
          lib::L2CValue::_L2CValue(aLStack296);
          if ((bVar3 & 1U) != 0) {
            uVar6 = lib::L2CValue::as_integer(aLStack264);
            pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar6);
            if (pvVar11 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack280,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
            }
            else {
              lib::L2CValue::L2CValue(aLStack280,pvVar11);
            }
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
            lib::L2CValue::L2CValue(aLStack296,_FIGHTER_STATUS_FINAL_WORK_FLOAT_TARGET_POS_X);
            fVar14 = (float)lib::L2CValue::as_number(pLVar9);
            iVar5 = lib::L2CValue::as_integer(aLStack296);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack280);
            app::lua_bind::WorkModule__set_float_impl(pBVar12,fVar14,iVar5);
            lib::L2CValue::_L2CValue(aLStack296);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
            lib::L2CValue::L2CValue(aLStack296,_FIGHTER_STATUS_FINAL_WORK_FLOAT_TARGET_POS_Y);
            fVar14 = (float)lib::L2CValue::as_number(pLVar9);
            iVar5 = lib::L2CValue::as_integer(aLStack296);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack280);
            app::lua_bind::WorkModule__set_float_impl(pBVar12,fVar14,iVar5);
            lib::L2CValue::_L2CValue(aLStack296);
            lib::L2CValue::L2CValue(aLStack296,_FIGHTER_STATUS_FINAL_WORK_FLOAT_SPEED);
            fVar14 = (float)lib::L2CValue::as_number(aLStack248);
            iVar5 = lib::L2CValue::as_integer(aLStack296);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack280);
            app::lua_bind::WorkModule__set_float_impl(pBVar12,fVar14,iVar5);
            lib::L2CValue::_L2CValue(aLStack296);
            pLVar9 = aLStack280;
            goto LAB_710001a51c;
          }
        }
        lib::L2CValue::_L2CValue(aLStack264);
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar4);
    }
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lVar1 = -0x88;
  }
  else {
    lib::L2CValue::L2CValue(aLStack328,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xb8);
    lib::L2CValue::L2CValue(aLStack200,false);
    uVar7 = lib::L2CValue::operator__(aLStack152,aLStack200);
    lib::L2CValue::_L2CValue(aLStack200);
    if ((uVar7 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack200,false);
      uVar7 = lib::L2CValue::operator__(aLStack216,aLStack200);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack328);
      lib::L2CValue::_L2CValue(aLStack136);
      if ((uVar7 & 1) == 0) goto LAB_710001a55c;
      goto LAB_7100019d8c;
    }
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack328);
    lVar1 = -0x78;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_710001a55c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


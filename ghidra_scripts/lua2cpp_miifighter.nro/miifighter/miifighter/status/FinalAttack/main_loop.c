
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::FinalAttack_main_loop
          (L2CFighterMiifighter *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  Hash40 HVar10;
  L2CValue *this_00;
  float fVar11;
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
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack152,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack136,true);
  uVar7 = lib::L2CValue::operator__(aLStack152,aLStack136);
  lib::L2CValue::_L2CValue(aLStack136);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack152);
LAB_7100037adc:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((bVar2 & 1U) == 0) {
      FUN_7100036b40(this);
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_ATTACK_FINISH);
      iVar3 = lib::L2CValue::as_integer(aLStack152);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack136);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack200,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_ATTACK_END);
        iVar3 = lib::L2CValue::as_integer(aLStack200);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack168,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack168);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack200);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::_L2CValue(aLStack152);
        if ((bVar2 & 1U) == 0) goto LAB_71000380b0;
        lib::L2CValue::L2CValue(aLStack136,_FIGHTER_MIIFIGHTER_STATUS_FINAL_FLAG_ATTACK_FINISH);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::L2CValue
                  (aLStack136,_FIGHTER_MIIFIGHTER_STATUS_FINAL_ATTACK_WORK_INT_HIT_TOTAL_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack152,iVar3);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::L2CValue(aLStack136,1);
        lib::L2CValue::operator_(aLStack152,aLStack136);
        lib::L2CValue::_L2CValue(aLStack136);
        iVar3 = lib::L2CValue::as_integer(aLStack168);
        lib::L2CValue::_L2CValue(aLStack168);
        if (-1 < iVar3) {
          iVar6 = -1;
          do {
            lib::L2CValue::L2CValue
                      (aLStack136,
                       iVar6 + _FIGHTER_MIIFIGHTER_STATUS_FINAL_ATTACK_WORK_INT_TASK_ID1 + 1);
            iVar4 = lib::L2CValue::as_integer(aLStack136);
            iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
            lib::L2CValue::L2CValue(aLStack168,iVar4);
            lib::L2CValue::_L2CValue(aLStack136);
            uVar5 = lib::L2CValue::as_integer(aLStack168);
            bVar1 = app::sv_battle_object::is_active(uVar5);
            lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack136);
            lib::L2CValue::_L2CValue(aLStack136);
            if ((bVar2 & 1U) != 0) {
              uVar5 = lib::L2CValue::as_integer(aLStack168);
              pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
              if (pvVar8 == (void *)0x0) {
                lib::L2CValue::L2CValue(aLStack216,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
              }
              else {
                lib::L2CValue::L2CValue(aLStack216,pvVar8);
              }
              pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack216);
              iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
              lib::L2CValue::L2CValue(aLStack200,iVar4);
              lib::L2CValue::L2CValue(aLStack136,_FIGHTER_STATUS_KIND_MIIFIGHTER_FINAL_DAMAGE_FLY);
              uVar7 = lib::L2CValue::operator__(aLStack200,aLStack136);
              lib::L2CValue::_L2CValue(aLStack136);
              if ((uVar7 & 1) == 0) {
                uVar5 = lib::L2CValue::as_integer(aLStack168);
                pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
                if (pvVar8 == (void *)0x0) {
                  lib::L2CValue::L2CValue(aLStack248,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack248,pvVar8);
                }
                pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack248);
                iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
                lib::L2CValue::L2CValue(aLStack232,iVar4);
                lib::L2CValue::L2CValue(aLStack136,_FIGHTER_STATUS_KIND_MIIFIGHTER_FINAL_DAMAGE);
                uVar7 = lib::L2CValue::operator__(aLStack232,aLStack136);
                lib::L2CValue::_L2CValue(aLStack136);
                if ((uVar7 & 1) != 0) {
                  lib::L2CValue::_L2CValue(aLStack232);
                  lib::L2CValue::_L2CValue(aLStack248);
                  goto LAB_7100037ed4;
                }
                uVar5 = lib::L2CValue::as_integer(aLStack168);
                pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
                if (pvVar8 == (void *)0x0) {
                  lib::L2CValue::L2CValue(aLStack280,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack280,pvVar8);
                }
                pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack280);
                iVar4 = app::lua_bind::StatusModule__status_kind_impl(pBVar9);
                lib::L2CValue::L2CValue(aLStack264,iVar4);
                lib::L2CValue::L2CValue
                          (aLStack136,_FIGHTER_STATUS_KIND_MIIFIGHTER_FINAL_DAMAGE_FALL);
                uVar7 = lib::L2CValue::operator__(aLStack264,aLStack136);
                lib::L2CValue::_L2CValue(aLStack136);
                lib::L2CValue::_L2CValue(aLStack264);
                lib::L2CValue::_L2CValue(aLStack280);
                lib::L2CValue::_L2CValue(aLStack232);
                lib::L2CValue::_L2CValue(aLStack248);
                lib::L2CValue::_L2CValue(aLStack200);
                lib::L2CValue::_L2CValue(aLStack216);
                if ((uVar7 & 1) == 0) goto LAB_7100037ff4;
              }
              else {
LAB_7100037ed4:
                lib::L2CValue::_L2CValue(aLStack200);
                lib::L2CValue::_L2CValue(aLStack216);
              }
              lib::L2CValue::L2CValue(aLStack136,_FIGHTER_MIIFIGHTER_LINK_NO_FINAL);
              iVar4 = lib::L2CValue::as_integer(aLStack136);
              uVar5 = lib::L2CValue::as_integer(aLStack168);
              bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar4,uVar5);
              lib::L2CValue::L2CValue(aLStack296,(bool)(bVar1 & 1));
              lib::L2CValue::_L2CValue(aLStack296);
              lib::L2CValue::_L2CValue(aLStack136);
              lib::L2CValue::L2CValue(aLStack136,_FIGHTER_MIIFIGHTER_LINK_NO_FINAL);
              lib::L2CValue::L2CValue(aLStack200,0xcd0c7600f);
              iVar4 = lib::L2CValue::as_integer(aLStack136);
              HVar10 = lib::L2CValue::as_hash(aLStack200);
              app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar4,HVar10,0);
              lib::L2CValue::_L2CValue(aLStack200);
              lib::L2CValue::_L2CValue(aLStack136);
              lib::L2CValue::L2CValue(aLStack136,_FIGHTER_MIIFIGHTER_LINK_NO_FINAL);
              lib::L2CValue::L2CValue(aLStack200,0xcd0c7600f);
              iVar4 = lib::L2CValue::as_integer(aLStack136);
              HVar10 = lib::L2CValue::as_hash(aLStack200);
              app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar4,HVar10);
              lib::L2CValue::_L2CValue(aLStack200);
              lib::L2CValue::_L2CValue(aLStack136);
              lib::L2CValue::L2CValue(aLStack136,_FIGHTER_MIIFIGHTER_LINK_NO_FINAL);
              iVar4 = lib::L2CValue::as_integer(aLStack136);
              app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar4);
              lib::L2CValue::_L2CValue(aLStack136);
            }
LAB_7100037ff4:
            lib::L2CValue::_L2CValue(aLStack168);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3);
        }
        lib::L2CValue::L2CValue(aLStack136,0);
        lib::L2CValue::L2CValue
                  (aLStack168,_FIGHTER_MIIFIGHTER_STATUS_FINAL_ATTACK_WORK_INT_HIT_TOTAL_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack136);
        iVar6 = lib::L2CValue::as_integer(aLStack168);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
        lib::L2CValue::_L2CValue(aLStack168);
        lib::L2CValue::_L2CValue(aLStack136);
        lib::L2CValue::L2CValue(aLStack136,0.0);
        lib::L2CValue::L2CValue(aLStack168,_FIGHTER_MIIFIGHTER_INSTANCE_WORK_ID_FLOAT_CAM_COUNT);
        fVar11 = (float)lib::L2CValue::as_number(aLStack136);
        iVar3 = lib::L2CValue::as_integer(aLStack168);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar11,iVar3);
        lib::L2CValue::_L2CValue(aLStack168);
      }
      this_00 = aLStack136;
    }
    else {
      lib::L2CValue::L2CValue(aLStack136,1);
      FUN_7100036e60(this,aLStack136);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
      lib::L2CValue::L2CValue(aLStack168,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x68,(L2CValue)0x58);
      this_00 = aLStack168;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack184,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x48);
    lib::L2CValue::L2CValue(aLStack136,false);
    uVar7 = lib::L2CValue::operator__(aLStack168,aLStack136);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((uVar7 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack136,false);
      uVar7 = lib::L2CValue::operator__(aLStack200,aLStack136);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack200);
      lib::L2CValue::_L2CValue(aLStack168);
      lib::L2CValue::_L2CValue(aLStack184);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((uVar7 & 1) == 0) goto LAB_71000380b0;
      goto LAB_7100037adc;
    }
    lib::L2CValue::_L2CValue(aLStack168);
    this_00 = aLStack184;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::_L2CValue(aLStack152);
LAB_71000380b0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


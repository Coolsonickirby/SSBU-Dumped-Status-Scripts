
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterZelda::status::FinalFinish_main_loop(L2CFighterZelda *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  int *this_00;
  long *plVar9;
  code *UNRECOVERED_JUMPTABLE;
  BattleObjectModuleAccessor *pBVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
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
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710000b840:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ZELDA_STATUS_FINAL_FLAG_FINISH);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_710000bcd0;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ZELDA_STATUS_FINAL_WORK_INT_TARGET_OBJECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::sv_battle_object::is_null(uVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack96);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar7 = aLStack96;
LAB_710000bc98:
        lib::L2CValue::_L2CValue(pLVar7);
      }
      else {
        uVar4 = lib::L2CValue::as_integer(aLStack192);
        bVar1 = app::sv_battle_object::is_active(uVar4);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          uVar4 = lib::L2CValue::as_integer(aLStack192);
          pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar4);
          if (pvVar8 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack208,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
          }
          else {
            lib::L2CValue::L2CValue(aLStack208,pvVar8);
          }
          this_00 = (int *)lib::L2CValue::operator__((L2CValue *)&this[1].functions,0x7861d1896);
          lib::L2CValue::L2CValue(aLStack240,aLStack192);
          lib::L2CValue::L2CValue(aLStack256,aLStack208);
          if (*this_00 == 6) {
            lib::L2CValue::L2CValue(aLStack144,aLStack240);
            lib::L2CValue::L2CValue(aLStack160,aLStack256);
            plVar9 = (long *)lib::L2CValue::as_inner_function((L2CValue *)this_00);
            lib::L2CValue::L2CValue(aLStack112,aLStack144);
            lib::L2CValue::L2CValue(aLStack128,aLStack160);
            lVar13 = *plVar9;
            lib::L2CValue::L2CValue(aLStack80,aLStack112);
            lib::L2CValue::L2CValue(aLStack96,aLStack128);
            plVar9 = *(long **)(lVar13 + 0x20);
            if (plVar9 == (long *)0x0) {
              puVar11 = (undefined8 *)__cxa_allocate_exception(8);
              *puVar11 = &PTR__exception_71001620a0;
              uVar12 = __cxa_throw(puVar11,&PTR_LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA_71001620c0,
                                   std::exception::_exception);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack240);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack192);
              _Unwind_Resume(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00710000bf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x710000bf18);
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            (**(code **)(*plVar9 + 0x30))(plVar9,aLStack80,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack160);
            pLVar7 = aLStack144;
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,aLStack240);
            lib::L2CValue::L2CValue(aLStack128,aLStack256);
            UNRECOVERED_JUMPTABLE = (code *)lib::L2CValue::as_pointer((L2CValue *)this_00);
            lib::L2CValue::L2CValue(aLStack80,aLStack112);
            lib::L2CValue::L2CValue(aLStack96,aLStack128);
            (*UNRECOVERED_JUMPTABLE)(this,aLStack80,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack128);
            pLVar7 = aLStack112;
          }
          lib::L2CValue::_L2CValue(pLVar7);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ZELDA_GENERATE_ARTICLE_TRIFORCE);
          pLVar7 = (L2CValue *)
                   lib::L2CValue::operator__((L2CValue *)&this[1].functions,0x19bac6704c);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar5 = lib::L2CValue::as_integer(pLVar7);
          app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar5);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_DAMAGE_FLY);
          lib::L2CValue::L2CValue(aLStack112,false);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar1 = lib::L2CValue::as_bool(aLStack112);
          pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack208);
          bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                            (pBVar10,iVar3,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          pLVar7 = aLStack208;
          goto LAB_710000bc98;
        }
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ZELDA_STATUS_FINAL_FLAG_FINISH);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar7 = aLStack192;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar7 = aLStack80;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) goto LAB_710000bcd0;
      goto LAB_710000b840;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar7 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar7);
LAB_710000bcd0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


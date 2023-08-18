
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialLwBomb_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  GroundTouchID GVar8;
  ulong uVar9;
  void *pvVar10;
  Article *pAVar11;
  ulong uVar12;
  L2CValue *pLVar13;
  BattleObjectModuleAccessor *pBVar14;
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
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar9 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100041db4:
    lib::L2CValue::L2CValue(aLStack304,0x1018dfb2f4);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xd0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLAG_GENERATE_BOMB);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar4 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_FLAG_GENERATE_BOMB);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar5,false,-1);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar5);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack320,pvVar10);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      uVar9 = lib::L2CValue::operator__(aLStack320,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar9 & 1) == 0) {
        pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack320);
        uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
        lib::L2CValue::L2CValue(aLStack336,uVar6);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_GENERATED_ID);
        iVar5 = lib::L2CValue::as_integer(aLStack336);
        iVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar7);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack112,0xd07e4325f);
        uVar9 = lib::L2CValue::as_integer(aLStack96);
        uVar12 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar9,uVar12);
        lib::L2CValue::L2CValue(aLStack192,iVar5);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack208,aLStack192);
        FUN_7100042cf0(aLStack96,this,aLStack208);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack224,aLStack192);
          FUN_7100042f70(aLStack96,this,aLStack224);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((bVar4 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack240,aLStack192);
            FUN_71000433a0(aLStack96,this,aLStack240);
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack240);
            if ((bVar4 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack272,aLStack192);
              lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
              lib::L2CValue::L2CValue(aLStack128,0xbd56df38c);
              uVar9 = lib::L2CValue::as_integer(aLStack96);
              uVar12 = lib::L2CValue::as_integer(aLStack128);
              iVar5 = app::lua_bind::WorkModule__get_param_int_impl
                                (this->moduleAccessor,uVar9,uVar12);
              lib::L2CValue::L2CValue(aLStack112,iVar5);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack96);
              this_00 = &this->globalTable;
              pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
              pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar13);
              iVar5 = lib::L2CValue::as_integer(aLStack96);
              iVar5 = app::FighterSpecializer_Pickel::get_material_num(pBVar14,iVar5);
              lib::L2CValue::L2CValue(aLStack128,iVar5);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack96,0);
              uVar9 = lib::L2CValue::operator__(aLStack128,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar9 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack144,0);
                iVar5 = lib::L2CValue::as_integer(aLStack128);
                if (0 < iVar5) {
                  iVar7 = 0;
                  do {
                    lib::L2CValue::L2CValue(aLStack96,1);
                    lib::L2CValue::operator_(aLStack144,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    lib::L2CValue::operator_(aLStack144,aLStack160);
                    lib::L2CValue::_L2CValue(aLStack160);
                    lib::L2CValue::operator_(aLStack272,aLStack112);
                    lib::L2CValue::operator_(aLStack272,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    lib::L2CValue::L2CValue(aLStack96,0);
                    uVar9 = lib::L2CValue::operator__(aLStack272,aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    if ((uVar9 & 1) != 0) {
                      pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
                      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
                      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar13);
                      iVar5 = lib::L2CValue::as_integer(aLStack96);
                      iVar7 = lib::L2CValue::as_integer(aLStack144);
                      app::FighterSpecializer_Pickel::sub_material_num(pBVar14,iVar5,iVar7);
                      lib::L2CValue::_L2CValue(aLStack96);
                      lib::L2CValue::L2CValue(aLStack256,true);
                      goto LAB_7100042364;
                    }
                    lib::L2CValue::L2CValue(aLStack176,aLStack272);
                    FUN_71000433a0(aLStack96,this,aLStack176);
                    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
                    lib::L2CValue::_L2CValue(aLStack96);
                    lib::L2CValue::_L2CValue(aLStack176);
                    if ((bVar4 & 1U) != 0) {
                      pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
                      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
                      pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar13);
                      iVar5 = lib::L2CValue::as_integer(aLStack96);
                      iVar7 = lib::L2CValue::as_integer(aLStack144);
                      app::FighterSpecializer_Pickel::sub_material_num(pBVar14,iVar5,iVar7);
                      lib::L2CValue::_L2CValue(aLStack96);
                      lib::L2CValue::L2CValue(aLStack256,true);
                      goto LAB_7100042364;
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < iVar5);
                }
                lib::L2CValue::L2CValue(aLStack256,false);
LAB_7100042364:
                lVar1 = -0x80;
              }
              else {
                lib::L2CValue::L2CValue(aLStack96,aLStack272);
                FUN_71000433a0(aLStack256,this,aLStack96);
                lVar1 = -0x50;
              }
              lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::operator_cast_to_bool(aLStack256);
              lib::L2CValue::_L2CValue(aLStack256);
              lib::L2CValue::_L2CValue(aLStack272);
            }
          }
        }
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack336);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_kinetic_energy::clear_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack320);
    }
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar4 & 1U) == 0) goto LAB_71000428e4;
    pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar9 = lib::L2CValue::operator__(pLVar13,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    cVar2 = (char)&stack0xfffffffffffffff0;
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar2 + -0x50),(L2CValue)(cVar2 + -0x60));
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar13 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
      iVar5 = lib::L2CValue::as_integer(aLStack96);
      pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar5);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,pvVar10);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      uVar9 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar2 + -0x50),(L2CValue)(cVar2 + -0x60));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100042524:
        lib::L2CValue::_L2CValue(aLStack176);
        return;
      }
      lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_ID_DOWN);
      GVar8 = lib::L2CValue::as_integer(aLStack112);
      pvVar10 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl
                                  (this->moduleAccessor,GVar8);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar10);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      uVar9 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_GENERATE_ARTICLE_PICKELBOMB);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar5)
        ;
        if (pvVar10 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,pvVar10);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        uVar9 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        if ((uVar9 & 1) == 0) {
          pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack112);
          uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
          lib::L2CValue::L2CValue(aLStack144,uVar6);
          uVar6 = lib::L2CValue::as_integer(aLStack144);
          pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar6);
          if (pvVar10 == (void *)0x0) {
            lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          }
          else {
            lib::L2CValue::L2CValue(aLStack128,pvVar10);
          }
          lib::L2CValue::_L2CValue(aLStack144);
          uVar9 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_ID_DOWN);
            GVar8 = lib::L2CValue::as_integer(aLStack160);
            pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
            pvVar10 = (void *)app::lua_bind::GroundModule__get_touch_line_raw_impl(pBVar14,GVar8);
            if (pvVar10 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack144,pvVar10);
            }
            lib::L2CValue::_L2CValue(aLStack160);
            uVar9 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            if ((uVar9 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack192,true);
            }
            else {
              lib::L2CValue::L2CValue(aLStack192,false);
            }
            lib::L2CValue::_L2CValue(aLStack144);
          }
          else {
            lib::L2CValue::L2CValue(aLStack192,false);
          }
          lib::L2CValue::_L2CValue(aLStack128);
        }
        else {
          lib::L2CValue::L2CValue(aLStack192,false);
        }
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,false);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar9 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,CONTROL_PAD_BUTTON_SPECIAL);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        bVar3 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack112,true);
          FUN_710002eb60(aLStack96,this,aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
        }
        else {
          pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_MATERIAL_KIND_RED_STONE);
          pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar13);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          iVar5 = app::FighterSpecializer_Pickel::get_material_num(pBVar14,iVar5);
          lib::L2CValue::L2CValue(aLStack112,iVar5);
          lib::L2CValue::L2CValue(aLStack96,0);
          uVar9 = lib::L2CValue::operator_(aLStack96,aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar9 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_LW_WAIT);
            lib::L2CValue::L2CValue(aLStack112,false);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar2 + -0x50),(L2CValue)(cVar2 + -0x60));
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            goto LAB_7100042524;
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar2 + -0x70),(L2CValue)(cVar2 + -0x80));
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar13 = aLStack176;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack288,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0xe0);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar9 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar9 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar9 = lib::L2CValue::operator__(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) goto LAB_71000428e4;
      goto LAB_7100041db4;
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack288);
    pLVar13 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar13);
LAB_71000428e4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


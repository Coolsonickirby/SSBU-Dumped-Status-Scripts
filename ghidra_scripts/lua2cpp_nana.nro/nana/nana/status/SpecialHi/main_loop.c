
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::SpecialHi_main_loop(L2CFighterNana *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float *pfVar9;
  L2CValue *pLVar10;
  float fVar11;
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
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar3 & 1U) == 0) {
    bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar4 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((bVar3 & 1U) == 0) {
      bVar4 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      lib::L2CValue::L2CValue(aLStack224,false);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack384,false);
        FUN_710001de50(aLStack368,this,aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack384);
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
      lib::L2CValue::L2CValue(aLStack224,false);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar6 & 1) == 0) {
LAB_710001cf44:
        lib::L2CValue::L2CValue(aLStack112,0);
        lib::L2CValue::L2CValue(aLStack128,0);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_STATUS_SPECIAL_HI_FLAG_CHECK_COUPLE);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        lib::L2CValue::L2CValue(aLStack224,true);
        uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_POPO_STATUS_SPECIAL_HI_FLAG_CHECK_COUPLE);
          iVar5 = lib::L2CValue::as_integer(aLStack224);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::L2CValue(aLStack80,0x253ce36631);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack224);
            pLVar7 = aLStack80;
LAB_710001d47c:
            lib::L2CValue::_L2CValue(pLVar7);
          }
          else {
            lib::L2CValue::L2CValue(aLStack144,0x2ac2788592);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((bVar3 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack80,0x290fb81a9f);
              lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
              lib::L2CValue::L2CValue(aLStack160,0xf64135945);
              uVar6 = lib::L2CValue::as_integer(aLStack144);
              uVar8 = lib::L2CValue::as_integer(aLStack160);
              fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (this->moduleAccessor,uVar6,uVar8);
              lib::L2CValue::L2CValue(aLStack96,fVar11);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
              app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
              lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
              bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
              lib::L2CValue::_L2CValue(aLStack224);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((bVar3 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack224,_FIGHTER_POPO_STATUS_SPECIAL_HI_FLAG_COUPLE);
                iVar5 = lib::L2CValue::as_integer(aLStack224);
                app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
                lib::L2CValue::_L2CValue(aLStack224);
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
                iVar5 = lib::L2CValue::as_integer(aLStack96);
                bVar4 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar5);
                lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
                lib::L2CValue::L2CValue(aLStack224,true);
                uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
                lib::L2CValue::_L2CValue(aLStack224);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue(aLStack96);
                if ((uVar6 & 1) != 0) {
                  lib::L2CValue::L2CValue(aLStack224,0x254341e6cf);
                  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_LINK_NO_PARTNER);
                  lib::L2CValue::L2CValue(aLStack96,0x227080a11b);
                  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_PARTNER);
                  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
                  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
                  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
                  lib::L2CValue::_L2CValue(aLStack144);
                  lib::L2CValue::_L2CValue(aLStack160);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack80);
                  lib::L2CValue::_L2CValue(aLStack224);
                  lib::L2CValue::L2CValue(aLStack224,0x15d26da2a8);
                  lib::L2CValue::operator_(aLStack128,aLStack224);
                  lib::L2CValue::_L2CValue(aLStack224);
                  pLVar7 = (L2CValue *)
                           lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
                  lib::L2CValue::L2CValue(aLStack224,_SITUATION_KIND_GROUND);
                  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack224);
                  lib::L2CValue::_L2CValue(aLStack224);
                  if ((uVar6 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack224,0x19dea9c97d);
                    lib::L2CValue::operator_(aLStack128,aLStack224);
                    lib::L2CValue::_L2CValue(aLStack224);
                  }
                  lib::L2CValue::L2CValue(aLStack224,0x254341e6cf);
                  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_LINK_NO_PARTNER);
                  lib::L2CValue::L2CValue(aLStack96,0x22fe7e65ef);
                  lib::L2CValue::L2CValue(aLStack176,false);
                  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
                  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
                  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
                  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
                  lib::L2CValue::_L2CValue(aLStack160);
                  lib::L2CValue::_L2CValue(aLStack176);
                  lib::L2CValue::_L2CValue(aLStack96);
                  lib::L2CValue::_L2CValue(aLStack80);
                  pLVar7 = aLStack224;
                  goto LAB_710001d47c;
                }
              }
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_STATUS_SPECIAL_HI_FLAG_DETACH_PARTNER);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
        lib::L2CValue::L2CValue(aLStack224,true);
        uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) goto LAB_710001da00;
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_POPO_STATUS_SPECIAL_HI_FLAG_DETACH_PARTNER);
        iVar5 = lib::L2CValue::as_integer(aLStack224);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::L2CValue(aLStack96,0x253ce36631);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
LAB_710001d94c:
          lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
          lib::L2CValue::L2CValue(aLStack96,1);
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_01 + -1);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack96);
          lVar2 = -0x40;
LAB_710001d9fc:
          lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
        }
        else {
          lib::L2CValue::L2CValue(aLStack192,0x278468a5eb);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_PARTNER);
          uVar6 = lib::L2CValue::operator__(aLStack176,aLStack224);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) == 0) goto LAB_710001d94c;
          lib::L2CValue::L2CValue(aLStack224,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_JUMP_PARTNER);
          lib::L2CValue::operator_(aLStack112,aLStack224);
          lib::L2CValue::_L2CValue(aLStack224);
          bVar4 = app::lua_bind::GroundModule__is_status_cliff_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
          lib::L2CValue::L2CValue(aLStack224,true);
          uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_CLIFF_COMP_PARTNER);
            lib::L2CValue::operator_(aLStack112,aLStack224);
            lib::L2CValue::_L2CValue(aLStack224);
          }
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_LINK_NO_PARTNER);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          bVar4 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
          lib::L2CValue::L2CValue(aLStack224,true);
          uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack224,0x254341e6cf);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_POPO_LINK_NO_PARTNER);
            lib::L2CValue::L2CValue(aLStack96,0x227080a11b);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::L2CValue
                      (aLStack224,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_CLIFF_COMP_PARTNER);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack224);
            lib::L2CValue::_L2CValue(aLStack224);
            if ((uVar6 & 1) == 0) goto LAB_710001da00;
            pfVar9 = (float *)app::lua_bind::GroundModule__hang_cliff_pos_impl(this->moduleAccessor)
            ;
            lib::L2CValue::L2CValue(aLStack224,*pfVar9);
            lib::L2CValue::L2CValue(aLStack208,pfVar9[1]);
            lib::L2CValue::L2CValue(aLStack80,aLStack224);
            lib::L2CValue::L2CValue(aLStack96,aLStack208);
            cVar1 = (char)&stack0xfffffffffffffff0;
            lua2cpp::L2CFighterBase::Vector2__create
                      (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::L2CValue(aLStack96,0x254341e6cf);
            lib::L2CValue::L2CValue(aLStack240,_FIGHTER_POPO_LINK_NO_PARTNER);
            lib::L2CValue::L2CValue(aLStack256,0x226543d7b0);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
            pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
            fVar11 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack272,fVar11);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar10);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::_L2CValue(aLStack96);
            lVar2 = -0xb0;
            goto LAB_710001d9fc;
          }
        }
LAB_710001da00:
        lib::L2CValue::L2CValue(aLStack288,0);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack224,0);
        uVar6 = lib::L2CValue::operator__(aLStack288,aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack288);
        if ((uVar6 & 1) == 0) goto LAB_710001da58;
        iVar5 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue(aLStack224,0);
        uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) goto LAB_710001cf44;
LAB_710001da58:
        iVar5 = 1;
      }
      lib::L2CValue::L2CValue(aLStack400,iVar5);
      lib::L2CValue::_L2CValue(aLStack400);
      iVar5 = 0;
      goto LAB_710001da74;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_POPO_STATUS_SPECIAL_HI_FLAG_COUPLE);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
    lib::L2CValue::L2CValue(aLStack224,true);
    uVar6 = lib::L2CValue::operator__(aLStack80,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_FAIL);
      lib::L2CValue::L2CValue(aLStack352,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
    }
    else {
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_JUMP_PRE);
      lib::L2CValue::L2CValue(aLStack320,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
    }
  }
  iVar5 = 1;
LAB_710001da74:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}


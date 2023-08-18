
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::TrailSpecialN1Shoot_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CAgent *pLVar9;
  ulong uVar10;
  float fVar11;
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
  
  HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar5);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  HVar5 = app::lua_bind::FighterMotionModuleImpl__motion_kind_kirby_copy_original_impl
                    (this->moduleAccessor,HVar5);
  lib::L2CValue::L2CValue(aLStack80,HVar5);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xbec77835c);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf1be5866b);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0xa1b1b0ad5);
      lib::L2CValue::L2CValue(aLStack144,0xeeb496041);
      lib::L2CValue::L2CValue(aLStack160,true);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
                (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar1 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
      uVar6 = lib::L2CValue::operator__(pLVar7,pLVar8);
      if ((uVar6 & 1) == 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
        lib::L2CValue::L2CValue(aLStack176,pLVar7);
        FUN_7100113610(this,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_TRAIL_STATUS_SPECIAL_N1_FLAG_SHOOTED);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TRAIL_INSTANCE_WORK_ID_FLAG_SPECIAL_N1_HOP);
      FUN_7100112810(this,aLStack192,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_TRAIL_STATUS_SPECIAL_N1_FLAG_CAN_INPUT);
      iVar4 = lib::L2CValue::as_integer(aLStack224);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar3 & 1U) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1f);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
        lib::L2CValue::operator_(pLVar7,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack224);
        if ((bVar3 & 1U) == 0) {
          pLVar7 = aLStack224;
        }
        else {
          pLVar7 = (L2CValue *)0x1a;
          pLVar9 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1a);
          lib::L2CAgent::math_abs(pLVar9,pLVar7);
          lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack272,0xf929dd70f);
          uVar6 = lib::L2CValue::as_integer(aLStack256);
          uVar10 = lib::L2CValue::as_integer(aLStack272);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (this->moduleAccessor,uVar6,uVar10);
          lib::L2CValue::L2CValue(aLStack240,fVar11);
          uVar6 = lib::L2CValue::operator_(aLStack80,aLStack240);
          if ((uVar6 & 1) == 0) {
            uVar6 = 0;
          }
          else {
            pLVar7 = (L2CValue *)0x1b;
            pLVar9 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1b);
            lib::L2CAgent::math_abs(pLVar9,pLVar7);
            lib::L2CValue::L2CValue(aLStack320,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack336,0xfe59ae799);
            uVar6 = lib::L2CValue::as_integer(aLStack320);
            uVar10 = lib::L2CValue::as_integer(aLStack336);
            fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (this->moduleAccessor,uVar6,uVar10);
            lib::L2CValue::L2CValue(aLStack304,fVar11);
            uVar6 = lib::L2CValue::operator_(aLStack288,aLStack304);
            uVar6 = uVar6 & 0xffffffff;
            lib::L2CValue::_L2CValue(aLStack304);
            lib::L2CValue::_L2CValue(aLStack336);
            lib::L2CValue::_L2CValue(aLStack320);
            lib::L2CValue::_L2CValue(aLStack288);
          }
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack224);
          if ((uVar6 & 1) == 0) goto LAB_7100113fdc;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TRAIL_STATUS_SPECIAL_N1_FLAG_NEXT_SHOOT);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
          pLVar7 = aLStack80;
        }
        lib::L2CValue::_L2CValue(pLVar7);
      }
LAB_7100113fdc:
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack224,_FIGHTER_TRAIL_STATUS_SPECIAL_N1_FLAG_NEXT_SHOOT);
        iVar4 = lib::L2CValue::as_integer(aLStack224);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_TRAIL_SPECIAL_N1_END);
          lib::L2CValue::L2CValue(aLStack224,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100113ca4;
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TRAIL_STATUS_SPECIAL_N1_FLAG_CAN_INPUT);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TRAIL_STATUS_SPECIAL_N1_FLAG_NEXT_SHOOT);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack224,0xbec77835c);
        lib::L2CValue::L2CValue(aLStack240,0xf1be5866b);
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
                  (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::L2CValue(aLStack288,0x2b94de0d96);
        lib::L2CValue::L2CValue(aLStack304,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
        lib::L2CValue::L2CValue(aLStack320,_FIGHTER_LOG_ATTACK_KIND_SPECIAL_N);
        lib::L2CValue::L2CValue(aLStack336,true);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::L2CValue(aLStack304,0x20cbc92683);
        lib::L2CValue::L2CValue(aLStack320,1);
        lib::L2CValue::L2CValue(aLStack336,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        app::lua_bind::ControlModule__clear_command_impl(this->moduleAccessor,false);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100113ca4;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,0xbec77835c);
  lib::L2CValue::L2CValue(aLStack128,0xf1be5866b);
  lib::L2CValue::L2CValue(aLStack144,true);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar1 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
  uVar6 = lib::L2CValue::operator__(pLVar7,pLVar8);
  if ((uVar6 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack160,pLVar7);
    FUN_7100113610(this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,0xa1b1b0ad5);
    lib::L2CValue::L2CValue(aLStack208,0xeeb496041);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
              (this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100113ca4:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}


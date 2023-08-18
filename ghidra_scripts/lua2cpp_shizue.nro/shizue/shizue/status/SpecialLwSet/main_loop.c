
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialLwSet_main_loop(L2CFighterShizue *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_710001d14c:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
    else {
      bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar4 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_LW_FLAG_SUCCESS);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        lib::L2CValue::operator_(aLStack80);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        if ((bVar4 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          pLVar7 = aLStack96;
LAB_710001d380:
          lib::L2CValue::_L2CValue(pLVar7);
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack160,_FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_CLAYROCKET_IS_READY);
          iVar5 = lib::L2CValue::as_integer(aLStack160);
          bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
          lib::L2CValue::operator_(aLStack144);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack128);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((bVar4 & 1U) != 0) {
            FUN_710001cca0(aLStack64,this);
            bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((bVar4 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
              app::sv_kinetic_energy::clear_speed(this->luaStateAgent);
              pLVar7 = aLStack64;
              goto LAB_710001d380;
            }
          }
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_LW_FLAG_SET);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
          app::sv_kinetic_energy::clear_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack64);
          FUN_710001cca0(aLStack64,this);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar4 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHIZUE_STATUS_KIND_SPECIAL_LW_FAILURE);
            lib::L2CValue::L2CValue(aLStack80,false);
            lua2cpp::L2CFighterBase::change_status
                      (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
            lib::L2CValue::_L2CValue(aLStack80);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack64,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_LW_FLAG_SUCCESS);
            iVar5 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue
                      (aLStack64,_FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_CLAYROCKET_IS_READY);
            iVar5 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHIZUE_GENERATE_ARTICLE_CLAYROCKET);
            iVar5 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar5,false,-1)
            ;
          }
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_LW_FLAG_SET);
          iVar5 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        iVar5 = 0;
        goto LAB_710001d23c;
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x30;
LAB_710001d230:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lVar2 = -0x40;
      goto LAB_710001d230;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) goto LAB_710001d14c;
  }
  iVar5 = 1;
LAB_710001d23c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}


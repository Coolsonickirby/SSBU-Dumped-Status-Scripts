
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwSteel_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  Fighter *pFVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  uVar6 = lib::L2CValue::operator__(pLVar4,pLVar5);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0xc63d9df47);
    lib::L2CValue::L2CValue(aLStack128,0x10db93e84d);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack176,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  FUN_710001cf40(this);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_STEEL);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack192,0x1cf0b7fece);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack192);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (this->moduleAccessor,iVar3,HVar7,-1);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_SOUND);
        lib::L2CValue::L2CValue(aLStack192,0x1bb6d90083);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        HVar7 = lib::L2CValue::as_hash(aLStack192);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (this->moduleAccessor,iVar3,HVar7,-1);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack192);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_STEEL_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_STEEL_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar6 = lib::L2CValue::operator__(aLStack192,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_STEEL);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
        pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
        app::FighterSpecializer_Brave::special_lw_deactive_command(pFVar8);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_STEEL_END);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


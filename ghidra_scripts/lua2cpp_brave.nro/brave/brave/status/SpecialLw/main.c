
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLw_main(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  Fighter *pFVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_WINDOW_STATE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_COMMAND_WINDOW_STATE_CLOSE);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = &this->globalTable;
  if ((uVar3 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack80,true);
    pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::FighterSpecializer_Brave::special_lw_close_window(pFVar5,(bool)(bVar1 & 1),false,false);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  app::FighterSpecializer_Brave::special_lw_open_command(pFVar5);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
  app::FighterSpecializer_Brave::special_lw_start_select_command(pFVar5);
  lib::L2CValue::L2CValue(aLStack96,0x10ef97f71f);
  lib::L2CValue::L2CValue(aLStack112,0x146e22785f);
  lib::L2CValue::L2CValue(aLStack128,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}


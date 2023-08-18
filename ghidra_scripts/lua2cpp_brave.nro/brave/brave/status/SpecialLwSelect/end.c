
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwSelect_end(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue *this_01;
  Fighter *pFVar9;
  Hash40 HVar10;
  ulong uVar11;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_START);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::L2CValue(aLStack128,true);
    this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_FAILURE);
    bVar1 = lib::L2CValue::operator__(this_01,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    bVar2 = lib::L2CValue::as_bool(aLStack128);
    bVar3 = lib::L2CValue::as_bool(aLStack144);
    app::FighterSpecializer_Brave::special_lw_close_window
              (pFVar9,(bool)(bVar1 & 1),(bool)(bVar2 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_CANCEL);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLAG_AUTO_CANCEL);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack112,0x1784675ea3);
        HVar10 = lib::L2CValue::as_hash(aLStack112);
        iVar5 = app::lua_bind::SoundModule__play_se_no3d_impl
                          (this->moduleAccessor,HVar10,false,false);
        lib::L2CValue::L2CValue(aLStack96,iVar5);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack144,0x2c50b3d6f0);
        uVar8 = lib::L2CValue::as_integer(aLStack128);
        uVar11 = lib::L2CValue::as_integer(aLStack144);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar8,uVar11);
        lib::L2CValue::L2CValue(aLStack112,iVar5);
        lib::L2CValue::L2CValue
                  (aLStack160,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_WINDOW_CLOSING_FRAME);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        iVar6 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar5,iVar6);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


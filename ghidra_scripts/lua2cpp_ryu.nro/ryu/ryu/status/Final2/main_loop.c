
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRyu::status::Final2_main_loop(L2CFighterRyu *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *this_01;
  L2CValue *this_02;
  Vector3f VVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack160,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) {
      this_00 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar6,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar6,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar4 & 1) != 0) goto LAB_710003e6c0;
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar6,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar6,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) goto LAB_710003e6c8;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    else {
LAB_710003e6c0:
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710003e6c8:
      FUN_710003eba0(this);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_ADJUST_SHINRYUKEN_POS)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack160,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) goto LAB_710003ea54;
    pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,*pfVar5);
    lib::L2CValue::L2CValue(aLStack144,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack128,pfVar5[2]);
    FUN_7100009f50(aLStack96,this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack192,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack208,0x149c3b48e8);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    uVar7 = lib::L2CValue::as_integer(aLStack208);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar7)
    ;
    VVar8 = SUB81(uVar7,0);
    lib::L2CValue::L2CValue(aLStack176,fVar9);
    lib::L2CValue::operator_(pLVar6,aLStack176);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KEN_GENERATE_ARTICLE_SHINRYUKEN);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x162d277af);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    lib::L2CValue::as_number(pLVar6);
    lib::L2CValue::as_number(this_01);
    lib::L2CValue::as_number(this_02);
    app::lua_bind::ArticleModule__set_pos_impl(this->moduleAccessor,iVar3,VVar8);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_ADJUST_SHINRYUKEN_POS)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_RYU_STATUS_KIND_FINAL2_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710003ea54:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


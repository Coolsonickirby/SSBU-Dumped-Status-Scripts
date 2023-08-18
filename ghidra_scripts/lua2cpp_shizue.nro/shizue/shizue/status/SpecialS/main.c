
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialS_main(L2CFighterShizue *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
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
  ulong local_60;
  ulong uStack88;
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar7 & 1) == 0) goto LAB_710000c708;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xd2b3a620b);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    bVar2 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGLINE);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SHIZUE_CLIFF_HANG_DATA_SPECIAL_S);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::status_AirLasso
              (this,(L2CValue)(cVar1 + -0x70),(L2CValue)(cVar1 + -0x80),(L2CValue)0x60,
               (L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lVar13 = -0x70;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x976c3b29b);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    bVar2 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack112,false);
    FUN_71000284d0(this,aLStack112);
    lVar13 = -0x60;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar13));
LAB_710000c708:
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack208,0xbe9a3d1e5);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer(aLStack208);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar9);
  lib::L2CValue::L2CValue(aLStack192,fVar10);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack224,0xb9ea4e173);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer(aLStack224);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar9);
  lib::L2CValue::L2CValue(aLStack208,fVar10);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack240,0xbb12af023);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer(aLStack240);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar9);
  lib::L2CValue::L2CValue(aLStack224,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1c);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack224);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_FLICK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue(aLStack240,1.0);
  lib::L2CValue::L2CValue(aLStack256,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  uVar7 = lib::L2CValue::as_number(aLStack192);
  lVar13 = lib::L2CValue::as_number(aLStack208);
  uVar12 = lib::L2CValue::as_number(aLStack240);
  local_60 = uVar7 & 0xffffffff | lVar13 << 0x20;
  uStack88 = (ulong)uVar12;
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  app::lua_bind::KineticModule__mul_speed_impl(this->moduleAccessor,(Vector3f *)&local_60,iVar3);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_SHIZUE_FISHINGROD_STATUS_KIND_START);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar5 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar5);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialS_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)(cVar1 + -0x50));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}


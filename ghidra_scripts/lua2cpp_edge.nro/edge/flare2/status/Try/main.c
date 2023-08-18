
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlare2::status::Try_main(L2CWeaponEdgeFlare2 *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  HitStatus HVar5;
  Hash40 HVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  ulong uVar10;
  L2CValue *pLVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
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
  
  lib::L2CValue::L2CValue(aLStack240,0x39869cb72);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar6 = lib::L2CValue::as_hash(aLStack240);
  fVar12 = (float)lib::L2CValue::as_number(aLStack96);
  fVar13 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_LINK_NO_CONSTRAINT);
  iVar2 = lib::L2CValue::as_integer(aLStack240);
  uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar2,true);
  lib::L2CValue::L2CValue(aLStack128,uVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack240,false);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,pvVar8);
    }
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLOAT_RATIO);
    iVar2 = lib::L2CValue::as_integer(aLStack240);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar9,iVar2);
    lib::L2CValue::L2CValue(aLStack160,fVar12);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,0x109d30aa1b);
    lib::L2CValue::L2CValue(aLStack96,0x1127e61f6f);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    uVar10 = lib::L2CValue::as_integer(aLStack96);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar9,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack176,fVar12);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,0x109d30aa1b);
    lib::L2CValue::L2CValue(aLStack96,0x11ebeb6460);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    uVar10 = lib::L2CValue::as_integer(aLStack96);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar9,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack192,fVar12);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    uVar14 = app::lua_bind::PostureModule__pos_2d_impl(pBVar9);
    lib::L2CValue::L2CValue(aLStack240,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::L2CValue(aLStack96,aLStack240);
    lib::L2CValue::L2CValue(aLStack112,aLStack224);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_OFFSET_X);
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,fVar12);
    lib::L2CValue::operator_(pLVar11,aLStack112);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    lib::L2CValue::operator_(pLVar11,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_OFFSET_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,fVar12);
    lib::L2CValue::operator_(pLVar11,aLStack112);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar11,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    fVar12 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar12);
    lib::L2CValue::operator_(aLStack176,aLStack112);
    lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack192,aLStack112);
    lib::L2CValue::operator_(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack304,aLStack176);
    lib::L2CValue::L2CValue(aLStack320,aLStack192);
    lib::L2CValue::L2CValue(aLStack336,aLStack160);
    lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::operator_(aLStack288);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack272,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_SPEED);
    fVar12 = (float)lib::L2CValue::as_number(aLStack256);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack256);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_XLU);
    HVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar5,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,Try_main_loop);
    lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


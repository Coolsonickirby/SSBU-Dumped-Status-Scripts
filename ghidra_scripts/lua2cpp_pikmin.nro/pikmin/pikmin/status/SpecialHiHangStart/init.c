
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialHiHangStart_init
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar5;
  Hash40 HVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
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
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_HOLD_INDEX);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_HOLD_NUM)
  ;
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
  uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
    uVar4 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
      uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
        lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
        goto LAB_710002702c;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
LAB_710002702c:
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_LR_SPECIAL_HI_SET);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
  uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
      uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar4 & 1) == 0) goto LAB_71000271a4;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
LAB_71000271a4:
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
    uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) goto LAB_7100027260;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,14.0);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack144,aLStack176);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,14.0);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack144,aLStack176);
  }
  lib::L2CValue::_L2CValue(aLStack176);
LAB_7100027260:
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,aLStack144);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  lib::L2CValue::L2CValue(aLStack240,1);
  uVar4 = lib::L2CValue::as_number(this_00);
  lVar9 = lib::L2CValue::as_number(this_01);
  uVar8 = lib::L2CValue::as_number(this_02);
  local_60 = uVar4 & 0xffffffff | lVar9 << 0x20;
  uStack88 = (ulong)uVar8;
  iVar2 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_60,iVar2);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_HI_HANG_START_WORK_INT_INDEX
            );
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             _WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_HI_HANG_START_WORK_FLOAT_ROT_Z);
  fVar7 = (float)lib::L2CValue::as_number(aLStack240);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0x39bbb32f85);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_PIKMIN_PIKMIN_LINK_NO_PARENT);
  lib::L2CValue::L2CValue(aLStack288,_LINK_NO_ARTICLE);
  iVar2 = lib::L2CValue::as_integer(aLStack288);
  uVar8 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar2,true);
  lib::L2CValue::L2CValue(aLStack272,uVar8);
  iVar2 = lib::L2CValue::as_integer(aLStack256);
  uVar8 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar2,uVar8);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack272,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack288,0x5e008fd84);
  lib::L2CValue::L2CValue
            (aLStack304,
             _CONSTRAINT_FLAG_ORIENTATION_POSTURE_ROT | CONSTRAINT_FLAG_POSITION |
             _CONSTRAINT_FLAG_NO_FLIP);
  iVar2 = lib::L2CValue::as_integer(aLStack256);
  HVar5 = lib::L2CValue::as_hash(aLStack272);
  HVar6 = lib::L2CValue::as_hash(aLStack288);
  uVar8 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
            (this->moduleAccessor,iVar2,HVar5,HVar6,uVar8,true);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack272,0x309ba28250);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


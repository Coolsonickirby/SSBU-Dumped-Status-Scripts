
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPzenigame::status::SpecialNShoot_exec_stop
          (L2CFighterPzenigame *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  uint uVar7;
  float fVar8;
  long lVar9;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong local_d0;
  ulong uStack200;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_FLAG_SHOOT_ANGLE_ENABLE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,true);
  uVar3 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_FLAG_NODE_ANGLE_SET);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,false);
    uVar3 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,0x4a7f3f69c);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      HVar4 = lib::L2CValue::as_hash(aLStack112);
      uVar3 = lib::L2CValue::as_number(aLStack128);
      lVar9 = lib::L2CValue::as_number(aLStack144);
      uVar7 = lib::L2CValue::as_number(aLStack160);
      local_60 = uVar3 & 0xffffffff | lVar9 << 0x20;
      uStack88 = (ulong)uVar7;
      app::lua_bind::MotionModule__joint_local_rotation_impl
                (this->moduleAccessor,HVar4,(Vector3f *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,(float)local_60);
      lib::L2CValue::L2CValue(aLStack192,local_60._4_4_);
      lib::L2CValue::L2CValue(aLStack176,(float)uStack88);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_d0);
      lib::L2CValue::operator_(aLStack144,aLStack192);
      lib::L2CValue::operator_(aLStack160,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_d0,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_FLOAT_NODE_ANGLE);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_d0,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_FLAG_NODE_ANGLE_SET);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0x500814509);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    uVar3 = lib::L2CValue::operator__((L2CValue *)&local_d0,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack272,0xa00f75be9);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar8);
      lib::L2CValue::operator_(aLStack240);
      lib::L2CValue::operator_(aLStack224,aLStack112);
      lib::L2CValue::operator_((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack160,aLStack288);
      lib::L2CValue::operator_(aLStack112,aLStack144);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      pLVar5 = aLStack256;
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack256,0x8828c7f69);
      uVar3 = lib::L2CValue::as_integer(aLStack240);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar6);
      lib::L2CValue::L2CValue(aLStack224,fVar8);
      lib::L2CValue::operator_(aLStack224,aLStack112);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack112,aLStack144);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar5 = aLStack240;
    }
    lib::L2CValue::_L2CValue(pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_FLOAT_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack224,0xb67e745c5);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::operator_(aLStack128,aLStack144);
    uVar3 = lib::L2CValue::operator_(aLStack160,aLStack224);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator_(aLStack160);
      uVar3 = lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::operator_(aLStack160);
        lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_d0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      }
    }
    else {
      lib::L2CValue::operator_(aLStack224,aLStack160);
    }
    lib::L2CValue::operator_(aLStack144,aLStack224);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_FLOAT_ANGLE);
    fVar8 = (float)lib::L2CValue::as_number(aLStack240);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_d0,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_FLOAT_NODE_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack240,fVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue(aLStack256,0x4a7f3f69c);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::operator_(aLStack240,aLStack128);
    HVar4 = lib::L2CValue::as_hash(aLStack256);
    uVar3 = lib::L2CValue::as_number(aLStack272);
    lVar9 = lib::L2CValue::as_number(aLStack288);
    uVar7 = lib::L2CValue::as_number(aLStack304);
    local_d0 = uVar3 & 0xffffffff | lVar9 << 0x20;
    uStack200 = (ulong)uVar7;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (this->moduleAccessor,HVar4,(Vector3f *)&local_d0,0,0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::CatchTurn_exec(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  Hash40 HVar7;
  Hash40 HVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  int in_stack_fffffffffffffe34;
  undefined in_stack_fffffffffffffe3c;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) goto LAB_7100018fc8;
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_FRAME);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLOAT_CATCH_EFFECT_LENGTH);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack160,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x126905af8d);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x10350f7af0);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack176,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x126905af8d);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xc75fd82ba);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x126905af8d);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xcc69ac449);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar5 = lib::L2CValue::operator_(aLStack144,aLStack176);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::operator_(aLStack160,aLStack208);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
  }
  else {
    lib::L2CValue::operator_(aLStack160,aLStack208);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack176);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack224,11.0);
    lib::L2CValue::L2CValue(aLStack240,-90.0);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_STATUS_KIND_CATCH_TURN);
    uVar5 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-11.0);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
      lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar3,true,true);
    lib::L2CValue::L2CValue(aLStack272,0x16214ed6ba);
    lib::L2CValue::L2CValue(aLStack288,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,7.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,90.0);
    lib::L2CValue::L2CValue(aLStack368,1.0);
    lib::L2CValue::L2CValue(aLStack384,false);
    HVar7 = lib::L2CValue::as_hash(aLStack272);
    HVar8 = lib::L2CValue::as_hash(aLStack288);
    uVar5 = lib::L2CValue::as_number(aLStack304);
    lVar11 = lib::L2CValue::as_number(aLStack320);
    uVar3 = lib::L2CValue::as_number(aLStack224);
    local_60 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar3;
    uVar5 = lib::L2CValue::as_number(aLStack240);
    lVar11 = lib::L2CValue::as_number(aLStack336);
    uVar3 = lib::L2CValue::as_number(aLStack352);
    local_70 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack104 = (ulong)uVar3;
    fVar9 = (float)lib::L2CValue::as_number(aLStack368);
    bVar1 = lib::L2CValue::as_bool(aLStack384);
    uVar3 = app::lua_bind::EffectModule__req_follow_impl
                      (this->moduleAccessor,HVar7,HVar8,(Vector3f *)&local_60,(Vector3f *)&local_70,
                       fVar9,(bool)(bVar1 & 1),0,0,-1,in_stack_fffffffffffffe34,0,
                       (bool)in_stack_fffffffffffffe3c,false);
    lib::L2CValue::L2CValue(aLStack256,uVar3);
    lib::L2CValue::operator_(aLStack128,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_HANDLE);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  uVar5 = lib::L2CValue::operator_(aLStack192,aLStack160);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::operator_(aLStack160);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_number((L2CValue *)&local_70);
      uVar10 = lib::L2CValue::as_number(aLStack224);
      local_60 = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
      uStack88 = 0;
      app::lua_bind::EffectModule__set_custom_uv_offset_impl
                (this->moduleAccessor,uVar3,(Vector2f *)&local_60,0);
      goto LAB_7100018e70;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::EffectModule__kill_impl(this->moduleAccessor,uVar3,true,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_HANDLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lVar11 = -0x50;
  }
  else {
    lib::L2CValue::operator_(aLStack160,aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_(aLStack160);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_number((L2CValue *)&local_70);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    local_60 = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
    uStack88 = 0;
    app::lua_bind::EffectModule__set_custom_uv_offset_impl
              (this->moduleAccessor,uVar3,(Vector2f *)&local_60,0);
LAB_7100018e70:
    lib::L2CValue::_L2CValue(aLStack224);
    lVar11 = -0x60;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar11));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_FLOAT_CATCH_EFFECT_LENGTH);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CATCH_EFFECT_FRAME);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
LAB_7100018fc8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


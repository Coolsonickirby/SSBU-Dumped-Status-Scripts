
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::AttackS4_main_loop(L2CFighterEflame *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  ulong local_120;
  undefined8 uStack280;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_EFLAME_STATUS_ATTACK_FLAG_S4_GROUND_CHECK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_120,_FIGHTER_EFLAME_STATUS_ATTACK_FLAG_S4_GROUND_CHECK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xfb223b09e);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x110d564b1d);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    lVar6 = app::lua_bind::WorkModule__get_param_int64_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack144,lVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xfb223b09e);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1a238eec7f);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xfb223b09e);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1a5489dce9);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack176,fVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xfb223b09e);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1acd808d53);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    uVar4 = lib::L2CValue::as_number(aLStack160);
    lVar6 = lib::L2CValue::as_number(aLStack176);
    uVar9 = lib::L2CValue::as_number(aLStack192);
    local_70 = uVar4 & 0xffffffff | lVar6 << 0x20;
    uStack104 = (ulong)uVar9;
    uVar4 = lib::L2CValue::as_number(aLStack304);
    lVar6 = lib::L2CValue::as_number(aLStack320);
    uVar9 = lib::L2CValue::as_number(aLStack336);
    local_80 = uVar4 & 0xffffffff | lVar6 << 0x20;
    uStack120 = (ulong)uVar9;
    app::lua_bind::ModelModule__joint_global_position_with_offset_impl
              (this->moduleAccessor,HVar7,(Vector3f *)&local_70,(Vector3f *)&local_80,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,(float)local_80);
    lib::L2CValue::L2CValue(aLStack272,local_80._4_4_);
    lib::L2CValue::L2CValue(aLStack256,(float)uStack120);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_120);
    lib::L2CValue::operator_(aLStack224,aLStack272);
    lib::L2CValue::operator_(aLStack240,aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xfb223b09e);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x156e30ca0c);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::operator_((L2CValue *)&local_80);
    lib::L2CValue::L2CValue(aLStack352,true);
    uVar4 = lib::L2CValue::as_number(aLStack208);
    uVar9 = lib::L2CValue::as_number(aLStack224);
    local_120 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack280 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack320);
    uVar9 = lib::L2CValue::as_number(aLStack336);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack104 = 0;
    bVar1 = lib::L2CValue::as_bool(aLStack352);
    bVar1 = app::lua_bind::GroundModule__ray_check_impl
                      (this->moduleAccessor,(Vector2f *)&local_120,(Vector2f *)&local_70,
                       (bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack304);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_120,0x135e793e5b);
      HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_120);
      iVar3 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar7,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack320,iVar3);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    }
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack304);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_120,0.0);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue(aLStack336,1.0);
      lib::L2CValue::L2CValue(aLStack352,1.0);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_120);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      fVar11 = (float)lib::L2CValue::as_number(aLStack336);
      fVar12 = (float)lib::L2CValue::as_number(aLStack352);
      app::sv_debug_draw::set_draw_color(fVar8,fVar10,fVar11,fVar12);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_120,1.0);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,1.0);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_120);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      fVar11 = (float)lib::L2CValue::as_number(aLStack336);
      fVar12 = (float)lib::L2CValue::as_number(aLStack352);
      app::sv_debug_draw::set_draw_color(fVar8,fVar10,fVar11,fVar12);
    }
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1);
    lib::L2CValue::L2CValue(aLStack336,0x3c);
    uVar4 = lib::L2CValue::as_number(aLStack208);
    uVar9 = lib::L2CValue::as_number(aLStack224);
    local_120 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack280 = 0;
    fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    iVar3 = lib::L2CValue::as_integer(aLStack336);
    app::sv_debug_draw::draw_circle((Vector2f *)&local_120,fVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_80);
    lib::L2CValue::L2CValue(aLStack352,0x3c);
    uVar4 = lib::L2CValue::as_number(aLStack208);
    uVar9 = lib::L2CValue::as_number(aLStack224);
    local_120 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack280 = 0;
    uVar4 = lib::L2CValue::as_number(aLStack208);
    uVar9 = lib::L2CValue::as_number(aLStack336);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar9 << 0x20;
    uStack104 = 0;
    iVar3 = lib::L2CValue::as_integer(aLStack352);
    app::sv_debug_draw::draw_line((Vector2f *)&local_120,(Vector2f *)&local_70,iVar3);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lua2cpp::L2CFighterCommon::status_AttackS4_Main(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::AttackS4_main_loop(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  
  HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,HVar7);
  lua2cpp::L2CFighterCommon::status_AttackS4_Main(this);
  lib::L2CValue::_L2CValue(aLStack160);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar8 = lib::L2CValue::operator__(aLStack176,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
    lib::L2CValue::L2CValue(aLStack176,0x5035390a1);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,1.0);
    lib::L2CValue::L2CValue(aLStack224,true);
    lib::L2CValue::L2CValue(aLStack240,false);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,false);
    lib::L2CValue::L2CValue(aLStack288,false);
    lib::L2CValue::L2CValue(aLStack304,true);
    iVar6 = lib::L2CValue::as_integer(aLStack128);
    HVar7 = lib::L2CValue::as_hash(aLStack176);
    fVar9 = (float)lib::L2CValue::as_number(aLStack192);
    fVar10 = (float)lib::L2CValue::as_number(aLStack208);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    bVar2 = lib::L2CValue::as_bool(aLStack240);
    fVar11 = (float)lib::L2CValue::as_number(aLStack256);
    bVar3 = lib::L2CValue::as_bool(aLStack272);
    bVar4 = lib::L2CValue::as_bool(aLStack288);
    bVar5 = lib::L2CValue::as_bool(aLStack304);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (this->moduleAccessor,iVar6,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
               fVar11,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,false);
  FUN_710001abe0(this,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}


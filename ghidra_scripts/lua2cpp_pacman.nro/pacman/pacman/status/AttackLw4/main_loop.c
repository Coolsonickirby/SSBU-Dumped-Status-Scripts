
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::AttackLw4_main_loop(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  
  lua2cpp::L2CFighterCommon::status_AttackLw4_Main(this);
  lib::L2CValue::_L2CValue(aLStack144);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack128,true);
  uVar7 = lib::L2CValue::operator__(aLStack160,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
    lib::L2CValue::L2CValue(aLStack160,0x5035390a1);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack208,true);
    lib::L2CValue::L2CValue(aLStack224,false);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,false);
    lib::L2CValue::L2CValue(aLStack272,true);
    lib::L2CValue::L2CValue(aLStack288,true);
    iVar6 = lib::L2CValue::as_integer(aLStack128);
    HVar8 = lib::L2CValue::as_hash(aLStack160);
    fVar9 = (float)lib::L2CValue::as_number(aLStack176);
    fVar10 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    bVar2 = lib::L2CValue::as_bool(aLStack224);
    fVar11 = (float)lib::L2CValue::as_number(aLStack240);
    bVar3 = lib::L2CValue::as_bool(aLStack256);
    bVar4 = lib::L2CValue::as_bool(aLStack272);
    bVar5 = lib::L2CValue::as_bool(aLStack288);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (this->moduleAccessor,iVar6,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
               fVar11,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,false);
  FUN_710001abe0(this,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


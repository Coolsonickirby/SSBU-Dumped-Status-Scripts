
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialHi_init(L2CFighterYoshi *this,L2CValue *return_value)

{
  int iVar1;
  GroundCorrectKind GVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  FighterKineticEnergyGravity *pFVar6;
  KineticEnergyNormal *pKVar7;
  ulong *puVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  ulong auStack240 [2];
  ulong auStack224 [2];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0x9493271f7);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  ppBVar9 = &this->moduleAccessor;
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack144,0x91d2a23b1);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack160,0xc0efcca1e);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar4 = lib::L2CValue::as_integer(aLStack160);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack176,0x97d4672df);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack192,0x5e24fde57);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack176,fVar10);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack208,0x7d41c64d3);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack192,fVar10);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0x1220fc2660);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack288,0xd982a112d);
  uVar3 = lib::L2CValue::as_integer(aLStack272);
  uVar4 = lib::L2CValue::as_integer(aLStack288);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack256,fVar10);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator__((L2CValue *)auStack224,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_GROUND);
    GVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::GroundModule__set_correct_impl(*ppBVar9,GVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar1);
    puVar8 = &local_60;
    goto LAB_7100007a10;
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_HOP_COUNT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
  uVar3 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_HOP_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack256);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar3 = lib::L2CValue::operator__((L2CValue *)auStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack240,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLOAT_HOP_SPEED);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack240);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      puVar8 = auStack240;
      goto LAB_71000076c8;
    }
    lib::L2CValue::operator_((L2CValue *)auStack224,aLStack128);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_60);
    puVar8 = &local_60;
LAB_71000076c8:
    lib::L2CValue::_L2CValue((L2CValue *)puVar8);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_AIR);
  GVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::GroundModule__set_correct_impl(*ppBVar9,GVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_TYPE_FALL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  fVar10 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack256,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack256,aLStack112);
  lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack256,(L2CValue *)auStack224);
  lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar3 = lib::L2CValue::operator_(aLStack144,aLStack256);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::operator_(aLStack256,aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack272,aLStack160);
  fVar10 = (float)lib::L2CValue::as_number(aLStack256);
  pFVar6 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack240);
  app::lua_bind::FighterKineticEnergyGravity__set_speed_impl(pFVar6,fVar10);
  lib::L2CValue::operator_(aLStack176);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  pFVar6 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack240);
  app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar6,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar10 = (float)lib::L2CValue::as_number(aLStack160);
  pFVar6 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack240);
  app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar6,fVar10);
  fVar10 = (float)lib::L2CValue::as_number(aLStack144);
  pFVar6 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)auStack240);
  app::lua_bind::FighterKineticEnergyGravity__set_limit_speed_impl(pFVar6,fVar10);
  lib::L2CValue::L2CValue(aLStack304,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack320,0xd184456a7);
  uVar3 = lib::L2CValue::as_integer(aLStack304);
  uVar4 = lib::L2CValue::as_integer(aLStack320);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack288,fVar10);
  lib::L2CValue::operator_((L2CValue *)auStack224,aLStack288);
  lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLOAT_HOP_SPEED);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack224);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_YOSHI_INSTANCE_WORK_ID_INT_HOP_COUNT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar9,iVar1);
  lib::L2CValue::L2CValue(aLStack288,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack304,-1.0);
  uVar3 = lib::L2CValue::as_number(aLStack208);
  uVar11 = lib::L2CValue::as_number(aLStack304);
  local_60 = uVar3 & 0xffffffff | (ulong)uVar11 << 0x20;
  uStack88 = 0;
  pKVar7 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack288);
  app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar7,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)auStack240);
  puVar8 = auStack224;
LAB_7100007a10:
  lib::L2CValue::_L2CValue((L2CValue *)puVar8);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

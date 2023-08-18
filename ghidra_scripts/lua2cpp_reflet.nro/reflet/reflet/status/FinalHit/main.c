
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::FinalHit_main(L2CFighterReflet *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  HitStatus HVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
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
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1f20a9d549);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_HIT_STATUS_XLU);
  HVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_REFLET_STATUS_FINAL_FLAG_ATTACK_HIT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_REFLET_STATUS_FINAL_FLAG_SWORD_THROW_START)
  ;
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_REFLET_STATUS_FINAL_FLAG_CONTINUE_MOT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_REFLET_STATUS_FINAL_FLAG_CHANGE_STATUS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,960.0);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack224,0xb2eb1f24a);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack240,0x1775bd295b);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0);
    lib::L2CValue::L2CValue(aLStack336,0);
    HVar7 = lib::L2CValue::as_hash(aLStack240);
    uVar5 = lib::L2CValue::as_number(aLStack192);
    lVar10 = lib::L2CValue::as_number(aLStack160);
    uVar9 = lib::L2CValue::as_number(aLStack256);
    local_60 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack88 = (ulong)uVar9;
    uVar5 = lib::L2CValue::as_number(aLStack272);
    lVar10 = lib::L2CValue::as_number(aLStack288);
    uVar9 = lib::L2CValue::as_number(aLStack304);
    local_70 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack104 = (ulong)uVar9;
    fVar8 = (float)lib::L2CValue::as_number(aLStack144);
    uVar9 = lib::L2CValue::as_integer(aLStack320);
    iVar2 = lib::L2CValue::as_integer(aLStack336);
    uVar9 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar7,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar8,
                       uVar9,iVar2,false,0);
    lib::L2CValue::L2CValue(aLStack224,uVar9);
    lib::L2CValue::operator_(aLStack176,aLStack224);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,960.0);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack224,0xb2eb1f24a);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar6 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack240,0x178fb21438);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0);
    lib::L2CValue::L2CValue(aLStack336,0);
    HVar7 = lib::L2CValue::as_hash(aLStack240);
    uVar5 = lib::L2CValue::as_number(aLStack192);
    lVar10 = lib::L2CValue::as_number(aLStack160);
    uVar9 = lib::L2CValue::as_number(aLStack256);
    local_60 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack88 = (ulong)uVar9;
    uVar5 = lib::L2CValue::as_number(aLStack272);
    lVar10 = lib::L2CValue::as_number(aLStack288);
    uVar9 = lib::L2CValue::as_number(aLStack304);
    local_70 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack104 = (ulong)uVar9;
    fVar8 = (float)lib::L2CValue::as_number(aLStack144);
    uVar9 = lib::L2CValue::as_integer(aLStack320);
    iVar2 = lib::L2CValue::as_integer(aLStack336);
    uVar9 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar7,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar8,
                       uVar9,iVar2,false,0);
    lib::L2CValue::L2CValue(aLStack224,uVar9);
    lib::L2CValue::operator_(aLStack176,aLStack224);
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_FINAL_CUTIIN_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  FUN_710001dff0(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FinalHit_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}


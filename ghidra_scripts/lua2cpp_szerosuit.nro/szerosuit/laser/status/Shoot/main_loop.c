
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSzerosuitLaser::status::Shoot_main_loop
          (L2CWeaponSzerosuitLaser *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
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
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xb514303f1);
  lib::L2CValue::L2CValue(aLStack112,0x6017d9eb2);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  uVar10 = lib::L2CValue::as_number(aLStack144);
  uVar11 = lib::L2CValue::as_number(aLStack160);
  uVar12 = lib::L2CValue::as_number(aLStack96);
  local_50 = CONCAT44(uVar11,uVar10);
  uStack72 = (ulong)uVar12;
  bVar1 = app::lua_bind::AttackModule__set_offset_impl
                    (this->moduleAccessor,iVar3,(Vector3f *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,1);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  uVar10 = lib::L2CValue::as_number(aLStack160);
  uVar11 = lib::L2CValue::as_number(aLStack176);
  uVar12 = lib::L2CValue::as_number(aLStack96);
  local_50 = CONCAT44(uVar11,uVar10);
  uStack72 = (ulong)uVar12;
  bVar1 = app::lua_bind::AttackModule__set_offset_impl
                    (this->moduleAccessor,iVar3,(Vector3f *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_SZEROSUIT_LASER_STATUS_WORK_FLAG_START_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack144,0x24ee980829);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar7);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SZEROSUIT_LASER_LINK_NO_GUNSHIP);
    lib::L2CValue::L2CValue(aLStack144,0x23961a5264);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar7);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SZEROSUIT_LASER_LINK_NO_RETICLE);
    lib::L2CValue::L2CValue(aLStack144,0x23961a5264);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar7);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_SZEROSUIT_LASER_STATUS_WORK_FLAG_START_ATTACK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_SZEROSUIT_LASER_STATUS_WORK_FLAG_BEAM_EFFECT);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_ANIMCMD_EFFECT);
    lib::L2CValue::L2CValue(aLStack144,0xe939bc142);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar7,-1)
    ;
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    uVar12 = app::lua_bind::EffectModule__get_last_handle_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,uVar12);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_SZEROSUIT_LASER_STATUS_WORK_INT_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_SZEROSUIT_LASER_STATUS_WORK_FLAG_BEAM_EFFECT);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack144,0xb514303f1);
  lib::L2CValue::L2CValue(aLStack160,0x1102c73dba);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
  uVar5 = lib::L2CValue::operator<((L2CValue *)&local_50,pLVar8);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack176,0xb514303f1);
    lib::L2CValue::L2CValue(aLStack192,0x15fcf1b995);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar9);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue
              (aLStack192,_WEAPON_SZEROSUIT_LASER_INSTANCE_WORK_ID_INT_SAMUSP_SHOOT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,iVar3);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::operator-(aLStack176,(L2CValue *)&local_50);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::operator-(pLVar8,(L2CValue *)&local_50);
    lib::L2CValue::operator/(aLStack224,aLStack192);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::operator-(aLStack160,aLStack144);
    lib::L2CValue::operator*(aLStack256,aLStack208);
    lib::L2CValue::operator+(aLStack144,aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    fVar9 = (float)lib::L2CValue::as_number(aLStack224);
    app::lua_bind::AttackModule__set_attack_scale_impl(this->moduleAccessor,fVar9,false);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}


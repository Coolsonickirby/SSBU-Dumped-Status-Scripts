
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessPkflash::status::Bang_init(L2CWeaponNessPkflash *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  ulong local_180;
  ulong uStack376;
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
  L2CValue aLStack112 [16];
  undefined8 local_60;
  BattleObjectManager *pBStack88;
  
  lib::L2CValue::L2CValue(aLStack272,0xd58819e28);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,0x585d94462);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,0xd58819e28);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,0x920d17db9);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,0xd58819e28);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,0x928a841c8);
  uVar5 = lib::L2CValue::as_integer(aLStack272);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_NESS_PK_FLASH_INSTANCE_WORK_ID_FLOAT_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lib::L2CValue::operator_(aLStack128,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::operator_(aLStack160,aLStack112);
  lib::L2CValue::L2CValue(aLStack272,0.6666667);
  uVar5 = lib::L2CValue::operator_(aLStack272,aLStack192);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack272,0.3333333);
    uVar5 = lib::L2CValue::operator_(aLStack272,aLStack192);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar5 & 1) == 0) goto LAB_7100022308;
    lib::L2CValue::L2CValue(aLStack272,_CAMERA_QUAKE_KIND_S);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    app::lua_bind::CameraModule__req_quake_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,_CAMERA_QUAKE_KIND_M);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    app::lua_bind::CameraModule__req_quake_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack272);
LAB_7100022308:
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_INSTANCE_WORK_ID_INT_CUSTOMIZE_NO);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,0);
  uVar5 = lib::L2CValue::operator__(aLStack208,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack272,1);
    uVar5 = lib::L2CValue::operator__(aLStack208,aLStack272);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack224,0x104d4cd8f0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,0x103a4be866);
    }
    lib::L2CValue::_L2CValue(aLStack272);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,0xe085047c7);
  }
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,*pfVar7);
  lib::L2CValue::L2CValue(aLStack256,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack240,pfVar7[2]);
  HVar8 = lib::L2CValue::as_hash(aLStack224);
  uVar5 = lib::L2CValue::as_number(aLStack272);
  lVar12 = lib::L2CValue::as_number(aLStack256);
  uVar11 = lib::L2CValue::as_number(aLStack240);
  local_180 = uVar5 & 0xffffffff | lVar12 << 0x20;
  uStack376 = (ulong)uVar11;
  pBStack88 = FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_HI4_START;
  local_60 = FIGHTER_STATUS_KIND_ATTACK_S4_START;
  uVar11 = app::lua_bind::EffectModule__req_impl
                     (this->moduleAccessor,HVar8,(Vector3f *)&local_180,(Vector3f *)&local_60,1.0,0,
                      -1,false,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_NESS_PK_FLASH_INSTANCE_WORK_ID_INT_POWER);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar11 = lib::L2CValue::as_integer(pLVar9);
  uVar11 = app::sv_battle_object::get_founder_id(uVar11);
  lib::L2CValue::L2CValue(aLStack288,uVar11);
  uVar11 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                    (FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_HI4_START,uVar11);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((bVar2 & 1U) != 0) {
    uVar11 = lib::L2CValue::as_integer(aLStack288);
    pfVar7 = (float *)app::sv_battle_object::pos(uVar11);
    lib::L2CValue::L2CValue(aLStack272,*pfVar7);
    lib::L2CValue::L2CValue(aLStack256,pfVar7[1]);
    lib::L2CValue::L2CValue(aLStack240,pfVar7[2]);
    FUN_7100022a10(aLStack304,this,aLStack272);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack320,pLVar9);
    pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_180,*pfVar7);
    lib::L2CValue::L2CValue(aLStack368,pfVar7[1]);
    lib::L2CValue::L2CValue(aLStack352,pfVar7[2]);
    FUN_7100022a10(aLStack336,this,&local_180);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue((L2CValue *)&local_180);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack400,pLVar9);
    uVar5 = lib::L2CValue::operator_(aLStack320,aLStack400);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack416,-1.0);
      fVar10 = (float)lib::L2CValue::as_number(aLStack416);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar10);
    }
    else {
      lib::L2CValue::L2CValue(aLStack416,1.0);
      fVar10 = (float)lib::L2CValue::as_number(aLStack416);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar10);
    }
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}


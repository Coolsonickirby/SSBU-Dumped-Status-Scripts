
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001ad00(undefined8 param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor *pBVar9;
  L2CValue *this;
  float fVar10;
  undefined8 uVar11;
  long lVar12;
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
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack224,0xcedec4cee);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x12bd0374e3);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack336,fVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,0xcedec4cee);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x12ca044475);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack352,fVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack368,aLStack336);
  lib::L2CValue::L2CValue(aLStack384,aLStack352);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::~L2CValue(aLStack224);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack224,false);
  uVar5 = lib::L2CValue::operator==((L2CValue *)&local_50,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack224);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack128,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_FLOAT);
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,pvVar7);
      }
      lib::L2CValue::L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack240,0x31ed91fca);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,true);
      HVar8 = lib::L2CValue::as_hash(aLStack240);
      uVar5 = lib::L2CValue::as_number(aLStack256);
      lVar12 = lib::L2CValue::as_number(aLStack384);
      uVar4 = lib::L2CValue::as_number(aLStack368);
      local_50 = uVar5 & 0xffffffff | lVar12 << 0x20;
      uStack72 = (ulong)uVar4;
      uVar5 = lib::L2CValue::as_number(aLStack272);
      lVar12 = lib::L2CValue::as_number(aLStack288);
      uVar4 = lib::L2CValue::as_number(aLStack304);
      local_60 = uVar5 & 0xffffffff | lVar12 << 0x20;
      uStack88 = (ulong)uVar4;
      bVar1 = lib::L2CValue::as_bool(aLStack320);
      pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::ModelModule__joint_global_position_with_offset_impl
                (pBVar9,HVar8,(Vector3f *)&local_50,(Vector3f *)&local_60,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack224,(float)local_60);
      lib::L2CValue::L2CValue(aLStack208,local_60._4_4_);
      lib::L2CValue::L2CValue(aLStack192,(float)uStack88);
      lib::L2CValue::operator=(aLStack144,aLStack224);
      lib::L2CValue::operator=(aLStack160,aLStack208);
      lib::L2CValue::operator=(aLStack176,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack224,aLStack144);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack160);
      lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x20,(L2CValue)0xb0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      this = aLStack128;
      goto LAB_710001b17c;
    }
  }
  uVar11 = app::lua_bind::PostureModule__pos_2d_impl
                     (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack224,(float)uVar11);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar11 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack208);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack208);
  this = aLStack224;
LAB_710001b17c:
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  return;
}


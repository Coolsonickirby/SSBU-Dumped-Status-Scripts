
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b610(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CTable *this;
  Hash40 HVar5;
  Hash40 HVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  int in_stack_fffffffffffffe24;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
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
  ulong local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_GUARD);
  uVar4 = lib::L2CValue::operator==(pLVar3,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    this = (L2CTable *)operator.new(0x48);
    lib::L2CTable::L2CTable(this,8);
    lib::L2CValue::L2CValue(aLStack208,this);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x166665836f);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x16ff6cd2d5);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x16886be243);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x16160f77e0);
    lib::L2CValue::L2CValue(aLStack144,0x1661084776);
    lib::L2CValue::L2CValue(aLStack160,0x16f80116cc);
    lib::L2CValue::L2CValue(aLStack176,0x168f06265a);
    lib::L2CValue::L2CValue(aLStack192,0x161fb93bcb);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,1);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_50);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,2);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_60);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,3);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_70);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,4);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_80);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,5);
    lib::L2CValue::operator=(pLVar3,aLStack144);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,6);
    lib::L2CValue::operator=(pLVar3,aLStack160);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,7);
    lib::L2CValue::operator=(pLVar3,aLStack176);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,8);
    lib::L2CValue::operator=(pLVar3,aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0xdc41991b5);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_50);
    HVar5 = app::lua_bind::EffectModule__get_variation_effect_kind_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,-1);
    lib::L2CValue::L2CValue(aLStack144,HVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x166665836f);
    uVar4 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INSTANCE_WORK_ID_INT_COLOR);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
      lib::L2CValue::operator+((L2CValue *)&local_60,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack208,(L2CValue *)&local_70);
      lib::L2CValue::operator=(aLStack144,pLVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue(aLStack160,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,1.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,360.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,false);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    HVar6 = lib::L2CValue::as_hash(aLStack160);
    uVar4 = lib::L2CValue::as_number(aLStack176);
    lVar11 = lib::L2CValue::as_number(aLStack192);
    uVar7 = lib::L2CValue::as_number(aLStack240);
    local_50 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack72 = (ulong)uVar7;
    uVar4 = lib::L2CValue::as_number(aLStack256);
    lVar11 = lib::L2CValue::as_number(aLStack272);
    uVar7 = lib::L2CValue::as_number(aLStack288);
    local_60 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack88 = (ulong)uVar7;
    fVar8 = (float)lib::L2CValue::as_number(aLStack304);
    uVar4 = lib::L2CValue::as_number(aLStack320);
    lVar11 = lib::L2CValue::as_number(aLStack336);
    uVar7 = lib::L2CValue::as_number(aLStack352);
    local_70 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack104 = (ulong)uVar7;
    uVar4 = lib::L2CValue::as_number(aLStack368);
    lVar11 = lib::L2CValue::as_number(aLStack384);
    uVar7 = lib::L2CValue::as_number(aLStack400);
    local_80 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack120 = (ulong)uVar7;
    bVar1 = lib::L2CValue::as_bool(aLStack416);
    uVar7 = app::lua_bind::EffectModule__req_on_joint_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,HVar6,
                       (Vector3f *)&local_50,(Vector3f *)&local_60,fVar8,(Vector3f *)&local_70,
                       (Vector3f *)&local_80,(bool)(bVar1 & 1),0,in_stack_fffffffffffffe24,0);
    lib::L2CValue::L2CValue(aLStack224,uVar7);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
    fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    app::lua_bind::ModelModule__set_color_rgb_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8,fVar9,fVar10,0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  return;
}


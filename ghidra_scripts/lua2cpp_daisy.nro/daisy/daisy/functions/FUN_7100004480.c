
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100004480(L2CValue *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CTable *this;
  Hash40 HVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
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
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,false);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KIND_DAISY);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,0);
  lib::L2CValue::L2CValue(aLStack128,this);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_EFFECT_ID);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,1);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_LEFT_EFFECT_ID);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,2);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_RIGHT_EFFECT_ID);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,3);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_EF_NULL);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0x1120424959);
      lib::L2CValue::L2CValue(aLStack176,0);
      lib::L2CValue::L2CValue(aLStack192,0);
      lib::L2CValue::L2CValue(aLStack208,0);
      lib::L2CValue::L2CValue(aLStack224,0);
      lib::L2CValue::L2CValue(aLStack240,0);
      lib::L2CValue::L2CValue(aLStack256,0);
      fVar7 = (float)app::lua_bind::PostureModule__base_scale_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack288,fVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
      lib::L2CValue::operator/((L2CValue *)&local_50,aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      HVar6 = lib::L2CValue::as_hash(aLStack160);
      uVar8 = lib::L2CValue::as_number(aLStack176);
      uVar9 = lib::L2CValue::as_number(aLStack192);
      uVar10 = lib::L2CValue::as_number(aLStack208);
      local_50 = CONCAT44(uVar9,uVar8);
      uStack72 = (ulong)uVar10;
      uVar8 = lib::L2CValue::as_number(aLStack224);
      uVar9 = lib::L2CValue::as_number(aLStack240);
      uVar10 = lib::L2CValue::as_number(aLStack256);
      local_60 = CONCAT44(uVar9,uVar8);
      uStack88 = (ulong)uVar10;
      fVar7 = (float)lib::L2CValue::as_number(aLStack272);
      uVar10 = app::lua_bind::EffectModule__req_impl
                         (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar6,
                          (Vector3f *)&local_50,(Vector3f *)&local_60,fVar7,0,-1,false,0);
      lib::L2CValue::L2CValue(aLStack144,uVar10);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,1);
      lib::L2CValue::operator=(pLVar4,aLStack144);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0x11508034d8);
      lib::L2CValue::L2CValue(aLStack176,0);
      lib::L2CValue::L2CValue(aLStack192,0);
      lib::L2CValue::L2CValue(aLStack208,0);
      lib::L2CValue::L2CValue(aLStack224,0);
      lib::L2CValue::L2CValue(aLStack240,0);
      lib::L2CValue::L2CValue(aLStack256,0);
      fVar7 = (float)app::lua_bind::PostureModule__base_scale_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack288,fVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
      lib::L2CValue::operator/((L2CValue *)&local_50,aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      HVar6 = lib::L2CValue::as_hash(aLStack160);
      uVar8 = lib::L2CValue::as_number(aLStack176);
      uVar9 = lib::L2CValue::as_number(aLStack192);
      uVar10 = lib::L2CValue::as_number(aLStack208);
      local_50 = CONCAT44(uVar9,uVar8);
      uStack72 = (ulong)uVar10;
      uVar8 = lib::L2CValue::as_number(aLStack224);
      uVar9 = lib::L2CValue::as_number(aLStack240);
      uVar10 = lib::L2CValue::as_number(aLStack256);
      local_60 = CONCAT44(uVar9,uVar8);
      uStack88 = (ulong)uVar10;
      fVar7 = (float)lib::L2CValue::as_number(aLStack272);
      uVar10 = app::lua_bind::EffectModule__req_impl
                         (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar6,
                          (Vector3f *)&local_50,(Vector3f *)&local_60,fVar7,0,-1,false,0);
      lib::L2CValue::L2CValue(aLStack144,uVar10);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,1);
      lib::L2CValue::operator=(pLVar4,aLStack144);
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_EF_NULL);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack160,0x15c5dc0184);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x77a08c3fc);
      lib::L2CValue::L2CValue(aLStack176,6);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar7 = (float)lib::L2CValue::as_number(aLStack176);
      fVar7 = (float)app::sv_math::randf(HVar6,fVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
      uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
        uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,2);
          uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_50,3);
            uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_50,4);
              uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
              lib::L2CValue::~L2CValue((L2CValue *)&local_50);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_50,0x15c0931701);
                lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
              }
              else {
                lib::L2CValue::L2CValue((L2CValue *)&local_50,0x15c2d5a958);
                lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
              }
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_50,0x15c317c36f);
              lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_50,0x15c658d5ea);
            lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x15c79abfdd);
          lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x15c5dc0184);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x77a08c3fc);
      lib::L2CValue::L2CValue(aLStack176,5);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar7 = (float)lib::L2CValue::as_number(aLStack176);
      fVar7 = (float)app::sv_math::randf(HVar6,fVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x157d060060);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
      uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
        uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,2);
          uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_50,3);
            uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_50,0x157a0fa8bc);
              lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_50,0x157bcdc28b);
              lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_50,0x157e82d40e);
            lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x157f40be39);
          lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x157d060060);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
      }
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack192,0);
    lib::L2CValue::L2CValue(aLStack208,0);
    lib::L2CValue::L2CValue(aLStack224,0);
    lib::L2CValue::L2CValue(aLStack240,0);
    lib::L2CValue::L2CValue(aLStack256,0);
    lib::L2CValue::L2CValue(aLStack272,0);
    fVar7 = (float)app::lua_bind::PostureModule__base_scale_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack304,fVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    lib::L2CValue::operator/((L2CValue *)&local_50,aLStack304);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    HVar6 = lib::L2CValue::as_hash(aLStack160);
    uVar8 = lib::L2CValue::as_number(aLStack192);
    uVar9 = lib::L2CValue::as_number(aLStack208);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    local_50 = CONCAT44(uVar9,uVar8);
    uStack72 = (ulong)uVar10;
    uVar8 = lib::L2CValue::as_number(aLStack240);
    uVar9 = lib::L2CValue::as_number(aLStack256);
    uVar10 = lib::L2CValue::as_number(aLStack272);
    local_60 = CONCAT44(uVar9,uVar8);
    uStack88 = (ulong)uVar10;
    fVar7 = (float)lib::L2CValue::as_number(aLStack288);
    uVar10 = app::lua_bind::EffectModule__req_impl
                       (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar6,(Vector3f *)&local_50
                        ,(Vector3f *)&local_60,fVar7,0,-1,false,0);
    lib::L2CValue::L2CValue(aLStack176,uVar10);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,2);
    lib::L2CValue::operator=(pLVar4,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_EF_NULL);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack160,0x1359e264ea);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x77a08c3fc);
      lib::L2CValue::L2CValue(aLStack176,6);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar7 = (float)lib::L2CValue::as_number(aLStack176);
      fVar7 = (float)app::sv_math::randf(HVar6,fVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
      uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
        uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,2);
          uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_50,3);
            uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_50,4);
              uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
              lib::L2CValue::~L2CValue((L2CValue *)&local_50);
              if ((uVar5 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13c786f149);
                lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
              }
              else {
                lib::L2CValue::L2CValue((L2CValue *)&local_50,0x135e8fa0f3);
                lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
              }
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1329889065);
              lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13b7ec05c6);
            lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13c0eb3550);
          lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1359e264ea);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x77a08c3fc);
      lib::L2CValue::L2CValue(aLStack176,5);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar7 = (float)lib::L2CValue::as_number(aLStack176);
      fVar7 = (float)app::sv_math::randf(HVar6,fVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1320439f71);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
      uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
        uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,2);
          uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_50,3);
            uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
            lib::L2CValue::~L2CValue((L2CValue *)&local_50);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13272e5b68);
              lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1350296bfe);
              lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13ce4dfe5d);
            lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
          }
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0x13b94acecb);
          lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1320439f71);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_50);
      }
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack192,0);
    lib::L2CValue::L2CValue(aLStack208,0);
    lib::L2CValue::L2CValue(aLStack224,0);
    lib::L2CValue::L2CValue(aLStack240,0);
    lib::L2CValue::L2CValue(aLStack256,0);
    lib::L2CValue::L2CValue(aLStack272,0);
    fVar7 = (float)app::lua_bind::PostureModule__base_scale_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack304,fVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    lib::L2CValue::operator/((L2CValue *)&local_50,aLStack304);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    HVar6 = lib::L2CValue::as_hash(aLStack160);
    uVar8 = lib::L2CValue::as_number(aLStack192);
    uVar9 = lib::L2CValue::as_number(aLStack208);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    local_50 = CONCAT44(uVar9,uVar8);
    uStack72 = (ulong)uVar10;
    uVar8 = lib::L2CValue::as_number(aLStack240);
    uVar9 = lib::L2CValue::as_number(aLStack256);
    uVar10 = lib::L2CValue::as_number(aLStack272);
    local_60 = CONCAT44(uVar9,uVar8);
    uStack88 = (ulong)uVar10;
    fVar7 = (float)lib::L2CValue::as_number(aLStack288);
    uVar10 = app::lua_bind::EffectModule__req_impl
                       (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar6,(Vector3f *)&local_50
                        ,(Vector3f *)&local_60,fVar7,0,-1,false,0);
    lib::L2CValue::L2CValue(aLStack176,uVar10);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,3);
    lib::L2CValue::operator=(pLVar4,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,1);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_EFFECT_ID);
  iVar2 = lib::L2CValue::as_integer(pLVar4);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,2);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_LEFT_EFFECT_ID);
  iVar2 = lib::L2CValue::as_integer(pLVar4);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack128,3);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_PEACH_INSTANCE_WORK_ID_INT_WINDOW_RIGHT_EFFECT_ID);
  iVar2 = lib::L2CValue::as_integer(pLVar4);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b120(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GroundTouchFlag GVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CAgent *this;
  L2CValue *pLVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_INT_NO_ATTACH_WALL_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack288,iVar3);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack96,0x1157a8cc97);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  uVar7 = lib::L2CValue::as_integer(aLStack96);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar6,uVar7);
  lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),fVar11);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar11);
  lib::L2CValue::L2CValue(aLStack176,0);
  pLVar8 = aLStack176;
  uVar6 = lib::L2CValue::operator<=(aLStack288,pLVar8);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar6 & 1) != 0) {
    lib::L2CAgent::math_abs((L2CAgent *)auStack320,pLVar8);
    uVar6 = lib::L2CValue::operator<=((L2CValue *)(auStack320 + 0x10),aLStack336);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator*((L2CValue *)auStack320,param_3);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      uVar6 = lib::L2CValue::operator<(aLStack352,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack384,param_3);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        pLVar10 = aLStack128;
        lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,SUB81(pLVar10,0));
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack144,1.0);
        lib::L2CValue::operator=(pLVar8,aLStack176);
        lib::L2CValue::operator=(pLVar9,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        uVar6 = lib::L2CValue::operator<=(aLStack176,aLStack384);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar6 & 1) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_RIGHT);
          uVar4 = lib::L2CValue::as_integer(aLStack192);
          uVar12 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4);
          lib::L2CValue::L2CValue(aLStack176,(float)uVar12);
          lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar12 >> 0x20));
          lib::L2CValue::operator=(pLVar8,aLStack176);
          lib::L2CValue::operator=(pLVar9,aLStack160);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::L2CValue(aLStack176,1.0);
          lib::L2CValue::operator=(aLStack144,aLStack176);
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_LEFT);
          uVar4 = lib::L2CValue::as_integer(aLStack192);
          uVar12 = app::lua_bind::GroundModule__get_touch_normal_consider_gravity_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4);
          lib::L2CValue::L2CValue(aLStack176,(float)uVar12);
          lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar12 >> 0x20));
          lib::L2CValue::operator=(pLVar8,aLStack176);
          lib::L2CValue::operator=(pLVar9,aLStack160);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::L2CValue(aLStack176,-1.0);
          lib::L2CValue::operator=(aLStack144,aLStack176);
        }
        lib::L2CValue::~L2CValue(aLStack176);
        this = (L2CAgent *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
        lib::L2CAgent::math_atan(this,pLVar8,pLVar10);
        pLVar8 = aLStack144;
        lib::L2CValue::operator*(aLStack240,pLVar8);
        lib::L2CAgent::math_deg((L2CAgent *)auStack224,pLVar8);
        lib::L2CValue::L2CValue(aLStack176,90.0);
        lib::L2CValue::operator+((L2CValue *)(auStack224 + 0x10),aLStack176);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack224);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0x6e5ec7051);
        lib::L2CValue::L2CValue((L2CValue *)auStack224,0x15dacb56c7);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
        uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack224);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar6,
                                   uVar7);
        lib::L2CValue::L2CValue(aLStack176,fVar11);
        uVar6 = lib::L2CValue::operator<=(aLStack176,aLStack192);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack272,0x15e6c6699e);
          uVar6 = lib::L2CValue::as_integer(aLStack256);
          uVar7 = lib::L2CValue::as_integer(aLStack272);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar6,
                                     uVar7);
          lib::L2CValue::L2CValue(aLStack240,fVar11);
          uVar6 = lib::L2CValue::operator<=(aLStack192,aLStack240);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue((L2CValue *)auStack224);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
          if ((uVar6 & 1) != 0) goto LAB_710001b69c;
          lib::L2CValue::L2CValue(aLStack368,true);
        }
        else {
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue((L2CValue *)auStack224);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
LAB_710001b69c:
          lib::L2CValue::L2CValue(aLStack368,false);
        }
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack368);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_UP);
          uVar4 = lib::L2CValue::as_integer(aLStack112);
          bVar2 = app::lua_bind::GroundModule__is_touch_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack176,false);
          uVar6 = lib::L2CValue::operator==(aLStack96,aLStack176);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack336);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack176,0.0);
            uVar6 = lib::L2CValue::operator<=(aLStack176,param_3);
            lib::L2CValue::~L2CValue(aLStack176);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_RIGHT);
              GVar5 = lib::L2CValue::as_integer(aLStack96);
              bVar2 = app::lua_bind::GroundModule__is_attachable_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar5);
              lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack176);
              lib::L2CValue::~L2CValue(aLStack176);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue(param_1,true);
                goto LAB_710001b810;
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_LEFT);
              GVar5 = lib::L2CValue::as_integer(aLStack96);
              bVar2 = app::lua_bind::GroundModule__is_attachable_impl
                                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),GVar5);
              lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack176);
              lib::L2CValue::~L2CValue(aLStack176);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((bVar1 & 1U) != 0) {
                lib::L2CValue::L2CValue(param_1,true);
                goto LAB_710001b810;
              }
            }
          }
          goto LAB_710001b804;
        }
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack384);
      }
      lib::L2CValue::~L2CValue(aLStack352);
    }
    lib::L2CValue::~L2CValue(aLStack336);
  }
LAB_710001b804:
  lib::L2CValue::L2CValue(param_1,false);
LAB_710001b810:
  lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::~L2CValue(aLStack288);
  return;
}


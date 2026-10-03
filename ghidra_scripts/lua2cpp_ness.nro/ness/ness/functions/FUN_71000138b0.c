
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000138b0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  L2CAgent *pLVar12;
  L2CValue *pLVar13;
  L2CValue *this;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  L2CValue aLStack616 [16];
  L2CValue aLStack600 [16];
  L2CValue aLStack584 [16];
  L2CValue aLStack568 [16];
  L2CValue aLStack552 [16];
  L2CValue aLStack536 [16];
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  undefined auStack424 [32];
  L2CValue aLStack392 [16];
  undefined auStack376 [32];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [24];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,8);
  lib::L2CValue::L2CValue(aLStack248,true);
  uVar7 = lib::L2CValue::operator==(pLVar6,aLStack248);
  lib::L2CValue::~L2CValue(aLStack248);
  if ((uVar7 & 1) != 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168);
  lib::L2CValue::L2CValue(aLStack200,0.0);
  lib::L2CValue::L2CValue(aLStack216,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x38,(L2CValue)0x28);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack264,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack264);
  uVar19 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
  lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
  lib::L2CValue::operator=(pLVar6,aLStack248);
  lib::L2CValue::operator=(pLVar8,aLStack232);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::L2CValue(aLStack280,0.0);
  lib::L2CValue::L2CValue(aLStack296,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xe8,(L2CValue)0xd8);
  lib::L2CValue::~L2CValue(aLStack296);
  lib::L2CValue::~L2CValue(aLStack280);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
  fVar15 = (float)lib::L2CValue::as_number(pLVar9);
  fVar16 = (float)lib::L2CValue::as_number(pLVar10);
  uVar19 = app::sv_math::vec2_normalize(fVar15,fVar16);
  lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
  lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
  lib::L2CValue::operator=(pLVar6,aLStack248);
  lib::L2CValue::operator=(pLVar8,aLStack232);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::L2CValue(aLStack328,0.0);
  lib::L2CValue::L2CValue(aLStack344,0.0);
  pLVar6 = aLStack344;
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xb8,SUB81(pLVar6,0));
  lib::L2CValue::~L2CValue(aLStack344);
  lib::L2CValue::~L2CValue(aLStack328);
  ppBVar14 = &param_1->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_situation_changed_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
  lib::L2CValue::~L2CValue(aLStack248);
  if ((bVar2 & 1U) == 0) {
LAB_7100014300:
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar14);
    lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),iVar3);
    lib::L2CValue::L2CValue(aLStack248,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack376 + 0x10),aLStack248);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),_GROUND_TOUCH_FLAG_UP);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
      lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),GROUND_TOUCH_FLAG_RIGHT);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
        lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack248,GROUND_TOUCH_FLAG_RIGHT);
          lib::L2CValue::operator=(aLStack152,aLStack248);
          lib::L2CValue::~L2CValue(aLStack248);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),GROUND_TOUCH_FLAG_RIGHT);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
          uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar14,uVar4);
          lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
          lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
          lib::L2CValue::operator=(pLVar8,aLStack248);
          lib::L2CValue::operator=(pLVar9,aLStack232);
          goto LAB_71000148f0;
        }
        lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),_GROUND_TOUCH_FLAG_LEFT);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
        lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack248,_GROUND_TOUCH_FLAG_LEFT);
          lib::L2CValue::operator=(aLStack152,aLStack248);
          lib::L2CValue::~L2CValue(aLStack248);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),_GROUND_TOUCH_FLAG_LEFT);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
          uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar14,uVar4);
          lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
          lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
          lib::L2CValue::operator=(pLVar8,aLStack248);
          lib::L2CValue::operator=(pLVar9,aLStack232);
          goto LAB_71000148f0;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack248,_GROUND_TOUCH_FLAG_UP);
        lib::L2CValue::operator=(aLStack152,aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),_GROUND_TOUCH_FLAG_UP);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
        uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar14,uVar4);
        lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::operator=(pLVar8,aLStack248);
        lib::L2CValue::operator=(pLVar9,aLStack232);
LAB_71000148f0:
        lib::L2CValue::~L2CValue(aLStack232);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
      }
      lib::L2CValue::L2CValue(aLStack248,0);
      uVar7 = lib::L2CValue::operator==(aLStack152,aLStack248);
      lib::L2CValue::~L2CValue(aLStack248);
      if ((uVar7 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x1fbdb2615);
        fVar15 = (float)lib::L2CValue::as_number(pLVar6);
        fVar16 = (float)lib::L2CValue::as_number(pLVar8);
        fVar17 = (float)lib::L2CValue::as_number(pLVar9);
        fVar18 = (float)lib::L2CValue::as_number(pLVar10);
        fVar15 = (float)app::sv_math::vec2_angle(fVar15,fVar16,fVar17,fVar18);
        lib::L2CValue::L2CValue(aLStack248,fVar15);
        lib::L2CValue::operator=(aLStack168,aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::L2CValue((L2CValue *)(auStack424 + 0x10),0x1086bc4a93);
        uVar7 = lib::L2CValue::as_integer((L2CValue *)(auStack424 + 0x10));
        pLVar6 = (L2CValue *)lib::L2CValue::as_integer(param_5);
        fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*ppBVar14,uVar7,(ulong)pLVar6);
        lib::L2CValue::L2CValue(aLStack392,fVar15);
        lib::L2CValue::L2CValue(aLStack248,90.0);
        pLVar8 = aLStack248;
        lib::L2CValue::operator+(aLStack392,pLVar8);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CAgent::math_rad((L2CAgent *)auStack376,pLVar8);
        uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack376 + 0x10),aLStack168);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack376);
        lib::L2CValue::~L2CValue(aLStack392);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack248,GROUND_TOUCH_FLAG_RIGHT);
          uVar7 = lib::L2CValue::operator==(aLStack152,aLStack248);
          lib::L2CValue::~L2CValue(aLStack248);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack248,_GROUND_TOUCH_FLAG_LEFT);
            uVar7 = lib::L2CValue::operator==(aLStack152,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            if ((uVar7 & 1) == 0) goto LAB_71000157e8;
          }
          pLVar12 = (L2CAgent *)lib::L2CValue::operator[](aLStack312,0x1fbdb2615);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x18cdc1683);
          lib::L2CAgent::math_atan(pLVar12,pLVar8,pLVar6);
          while( true ) {
            lib::L2CValue::L2CValue(aLStack248,0.0);
            uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack376 + 0x10),aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            if ((uVar7 & 1) == 0) break;
            lib::L2CValue::L2CValue(aLStack248,2.0);
            lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            lib::L2CValue::operator+((L2CValue *)(auStack376 + 0x10),aLStack392);
            lib::L2CValue::operator=((L2CValue *)(auStack376 + 0x10),(L2CValue *)auStack376);
            lib::L2CValue::~L2CValue((L2CValue *)auStack376);
            lib::L2CValue::~L2CValue(aLStack392);
          }
          while( true ) {
            lib::L2CValue::L2CValue(aLStack248,2.0);
            lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            uVar7 = lib::L2CValue::operator<((L2CValue *)auStack376,(L2CValue *)(auStack376 + 0x10))
            ;
            lib::L2CValue::~L2CValue((L2CValue *)auStack376);
            if ((uVar7 & 1) == 0) break;
            lib::L2CValue::L2CValue(aLStack248,2.0);
            lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            lib::L2CValue::operator-((L2CValue *)(auStack376 + 0x10),aLStack392);
            lib::L2CValue::operator=((L2CValue *)(auStack376 + 0x10),(L2CValue *)auStack376);
            lib::L2CValue::~L2CValue((L2CValue *)auStack376);
            lib::L2CValue::~L2CValue(aLStack392);
          }
          iVar3 = lib::L2CValue::as_integer(param_2);
          fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)auStack376,fVar15);
          while( true ) {
            lib::L2CValue::L2CValue(aLStack248,0.0);
            uVar7 = lib::L2CValue::operator<((L2CValue *)auStack376,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            if ((uVar7 & 1) == 0) break;
            lib::L2CValue::L2CValue(aLStack248,2.0);
            lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            lib::L2CValue::operator+((L2CValue *)auStack376,(L2CValue *)(auStack424 + 0x10));
            lib::L2CValue::operator=((L2CValue *)auStack376,aLStack392);
            lib::L2CValue::~L2CValue(aLStack392);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
          }
          while( true ) {
            lib::L2CValue::L2CValue(aLStack248,2.0);
            lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            uVar7 = lib::L2CValue::operator<(aLStack392,(L2CValue *)auStack376);
            lib::L2CValue::~L2CValue(aLStack392);
            if ((uVar7 & 1) == 0) break;
            lib::L2CValue::L2CValue(aLStack248,2.0);
            lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            lib::L2CValue::operator-((L2CValue *)auStack376,(L2CValue *)(auStack424 + 0x10));
            lib::L2CValue::operator=((L2CValue *)auStack376,aLStack392);
            lib::L2CValue::~L2CValue(aLStack392);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
          }
          lib::L2CValue::L2CValue(aLStack248,GROUND_TOUCH_FLAG_RIGHT);
          uVar7 = lib::L2CValue::operator==(aLStack152,aLStack248);
          lib::L2CValue::~L2CValue(aLStack248);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::operator+
                      ((L2CValue *)(auStack376 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            lib::L2CValue::operator=(aLStack168,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            while( true ) {
              lib::L2CValue::L2CValue(aLStack248,0.0);
              uVar7 = lib::L2CValue::operator<(aLStack168,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              if ((uVar7 & 1) == 0) break;
              lib::L2CValue::L2CValue(aLStack248,2.0);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::operator+(aLStack168,(L2CValue *)(auStack424 + 0x10));
              lib::L2CValue::operator=(aLStack168,aLStack392);
              lib::L2CValue::~L2CValue(aLStack392);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
            }
            while( true ) {
              lib::L2CValue::L2CValue(aLStack248,2.0);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              uVar7 = lib::L2CValue::operator<(aLStack392,aLStack168);
              lib::L2CValue::~L2CValue(aLStack392);
              if ((uVar7 & 1) == 0) break;
              lib::L2CValue::L2CValue(aLStack248,2.0);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::operator-(aLStack168,(L2CValue *)(auStack424 + 0x10));
              lib::L2CValue::operator=(aLStack168,aLStack392);
              lib::L2CValue::~L2CValue(aLStack392);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
            }
            lib::L2CValue::operator-((L2CValue *)auStack376,aLStack168);
            lib::L2CValue::L2CValue(aLStack248,0.0);
            uVar7 = lib::L2CValue::operator<(aLStack392,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            lib::L2CValue::~L2CValue(aLStack392);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack248,0.5);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::operator-
                        ((L2CValue *)(auStack376 + 0x10),(L2CValue *)(auStack424 + 0x10));
              lib::L2CValue::operator=((L2CValue *)(auStack376 + 0x10),aLStack392);
            }
            else {
              lib::L2CValue::L2CValue(aLStack248,0.5);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::operator+
                        ((L2CValue *)(auStack376 + 0x10),(L2CValue *)(auStack424 + 0x10));
              lib::L2CValue::operator=((L2CValue *)(auStack376 + 0x10),aLStack392);
            }
          }
          else {
            lib::L2CValue::operator+
                      ((L2CValue *)auStack376,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            lib::L2CValue::operator=(aLStack168,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            while( true ) {
              lib::L2CValue::L2CValue(aLStack248,0.0);
              uVar7 = lib::L2CValue::operator<(aLStack168,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              if ((uVar7 & 1) == 0) break;
              lib::L2CValue::L2CValue(aLStack248,2.0);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::operator+(aLStack168,(L2CValue *)(auStack424 + 0x10));
              lib::L2CValue::operator=(aLStack168,aLStack392);
              lib::L2CValue::~L2CValue(aLStack392);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
            }
            while( true ) {
              lib::L2CValue::L2CValue(aLStack248,2.0);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              uVar7 = lib::L2CValue::operator<(aLStack392,aLStack168);
              lib::L2CValue::~L2CValue(aLStack392);
              if ((uVar7 & 1) == 0) break;
              lib::L2CValue::L2CValue(aLStack248,2.0);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::operator-(aLStack168,(L2CValue *)(auStack424 + 0x10));
              lib::L2CValue::operator=(aLStack168,aLStack392);
              lib::L2CValue::~L2CValue(aLStack392);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
            }
            lib::L2CValue::operator-(aLStack168,(L2CValue *)(auStack376 + 0x10));
            lib::L2CValue::L2CValue(aLStack248,0.0);
            uVar7 = lib::L2CValue::operator<(aLStack392,aLStack248);
            lib::L2CValue::~L2CValue(aLStack248);
            lib::L2CValue::~L2CValue(aLStack392);
            if ((uVar7 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack248,0.5);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::operator-
                        ((L2CValue *)(auStack376 + 0x10),(L2CValue *)(auStack424 + 0x10));
              lib::L2CValue::operator=((L2CValue *)(auStack376 + 0x10),aLStack392);
            }
            else {
              lib::L2CValue::L2CValue(aLStack248,0.5);
              lib::L2CValue::operator*((L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST,aLStack248);
              lib::L2CValue::~L2CValue(aLStack248);
              lib::L2CValue::operator+
                        ((L2CValue *)(auStack376 + 0x10),(L2CValue *)(auStack424 + 0x10));
              lib::L2CValue::operator=((L2CValue *)(auStack376 + 0x10),aLStack392);
            }
          }
          lib::L2CValue::~L2CValue(aLStack392);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
          pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
          pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
          lib::L2CValue::operator-((L2CValue *)(auStack376 + 0x10),(L2CValue *)auStack376);
          fVar15 = (float)lib::L2CValue::as_number(pLVar10);
          fVar16 = (float)lib::L2CValue::as_number(pLVar13);
          fVar17 = (float)lib::L2CValue::as_number(aLStack392);
          uVar19 = app::sv_math::vec2_rot(fVar15,fVar16,fVar17);
          lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
          lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
          lib::L2CValue::operator=(pLVar8,aLStack248);
          lib::L2CValue::operator=(pLVar9,aLStack232);
          lib::L2CValue::~L2CValue(aLStack232);
          lib::L2CValue::~L2CValue(aLStack248);
          lib::L2CValue::~L2CValue(aLStack392);
          lib::L2CValue::L2CValue(aLStack248,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack248);
          lib::L2CAgent::push_lua_stack(param_1,pLVar8);
          lib::L2CAgent::push_lua_stack(param_1,pLVar9);
          app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack248);
          iVar3 = lib::L2CValue::as_integer(param_4);
          app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar14,iVar3);
          lib::L2CValue::operator=((L2CValue *)auStack376,(L2CValue *)(auStack376 + 0x10));
          lib::L2CValue::L2CValue(aLStack248,0.0);
          lib::L2CValue::operator+((L2CValue *)auStack376,aLStack248);
          lib::L2CValue::~L2CValue(aLStack248);
          fVar15 = (float)lib::L2CValue::as_number(aLStack392);
          iVar3 = lib::L2CValue::as_integer(param_2);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
          lib::L2CValue::~L2CValue(aLStack392);
          pLVar8 = (L2CValue *)auStack376;
          goto LAB_71000157dc;
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x1fbdb2615);
        pLVar13 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        this = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        fVar15 = (float)lib::L2CValue::as_number(pLVar9);
        fVar16 = (float)lib::L2CValue::as_number(pLVar10);
        fVar17 = (float)lib::L2CValue::as_number(pLVar13);
        fVar18 = (float)lib::L2CValue::as_number(this);
        uVar19 = app::sv_math::vec2_reflection(fVar15,fVar16,fVar17,fVar18);
        lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
        lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
        lib::L2CValue::operator=(pLVar6,aLStack248);
        lib::L2CValue::operator=(pLVar8,aLStack232);
        lib::L2CValue::~L2CValue(aLStack232);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),0x1086bc4a93);
        uVar7 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
        uVar11 = lib::L2CValue::as_integer(param_7);
        fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar11);
        lib::L2CValue::L2CValue(aLStack248,fVar15);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar6,aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
        lib::L2CValue::L2CValue(aLStack248,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack248);
        lib::L2CAgent::push_lua_stack(param_1,pLVar6);
        lib::L2CAgent::push_lua_stack(param_1,pLVar8);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::L2CValue(aLStack248,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),0.0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack248);
        lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack376 + 0x10));
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::L2CValue(aLStack600,param_8);
        lib::L2CValue::L2CValue(aLStack616,false);
        pLVar6 = aLStack616;
        lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0xa8,SUB81(pLVar6,0));
        lib::L2CValue::~L2CValue(aLStack616);
        pLVar8 = aLStack600;
        goto LAB_71000157e4;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),_GROUND_TOUCH_FLAG_UP);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
      lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),GROUND_TOUCH_FLAG_RIGHT);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
        lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack248,GROUND_TOUCH_FLAG_RIGHT);
          lib::L2CValue::operator=(aLStack152,aLStack248);
          goto LAB_7100014678;
        }
        lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),_GROUND_TOUCH_FLAG_LEFT);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
        lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack248,_GROUND_TOUCH_FLAG_LEFT);
          lib::L2CValue::operator=(aLStack152,aLStack248);
          goto LAB_7100014678;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack248,_GROUND_TOUCH_FLAG_UP);
        lib::L2CValue::operator=(aLStack152,aLStack248);
LAB_7100014678:
        lib::L2CValue::~L2CValue(aLStack248);
      }
      lib::L2CValue::L2CValue(aLStack248,0);
      uVar7 = lib::L2CValue::operator==(aLStack152,aLStack248);
      lib::L2CValue::~L2CValue(aLStack248);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack568,FIGHTER_STATUS_KIND_DOWN);
        lib::L2CValue::L2CValue(aLStack584,false);
        pLVar6 = aLStack584;
        lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0xc8,SUB81(pLVar6,0));
        lib::L2CValue::~L2CValue(aLStack584);
        pLVar8 = aLStack568;
      }
      else {
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        fVar15 = (float)lib::L2CValue::as_number(pLVar8);
        fVar16 = (float)lib::L2CValue::as_number(pLVar9);
        fVar15 = (float)app::sv_math::vec2_length(fVar15,fVar16);
        lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),fVar15);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack248,0.0);
        uVar7 = lib::L2CValue::operator<(pLVar8,aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack248,1.0);
          lib::L2CValue::operator*((L2CValue *)(auStack376 + 0x10),aLStack248);
          lib::L2CValue::~L2CValue(aLStack248);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
          lib::L2CValue::operator=(pLVar8,(L2CValue *)auStack376);
          lib::L2CValue::~L2CValue((L2CValue *)auStack376);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack248,0.0);
          lib::L2CValue::operator=(pLVar8,aLStack248);
        }
        else {
          lib::L2CValue::L2CValue(aLStack248,-1.0);
          lib::L2CValue::operator*((L2CValue *)(auStack376 + 0x10),aLStack248);
          lib::L2CValue::~L2CValue(aLStack248);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
          lib::L2CValue::operator=(pLVar8,(L2CValue *)auStack376);
          lib::L2CValue::~L2CValue((L2CValue *)auStack376);
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack248,0.0);
          lib::L2CValue::operator=(pLVar8,aLStack248);
        }
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::L2CValue(aLStack248,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack248);
        lib::L2CAgent::push_lua_stack(param_1,pLVar8);
        lib::L2CAgent::push_lua_stack(param_1,pLVar9);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        pLVar8 = aLStack248;
LAB_71000157dc:
        lib::L2CValue::~L2CValue(pLVar8);
        pLVar8 = (L2CValue *)(auStack376 + 0x10);
      }
LAB_71000157e4:
      lib::L2CValue::~L2CValue(pLVar8);
    }
LAB_71000157e8:
    bVar1 = app::lua_bind::AttackModule__is_attack_occur_impl(*ppBVar14);
    lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
    lib::L2CValue::~L2CValue(aLStack248);
    if ((bVar2 & 1U) == 0) goto LAB_7100015b98;
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack376 + 0x10));
    uVar19 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
    lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
    lib::L2CValue::operator=(pLVar8,aLStack248);
    lib::L2CValue::operator=(pLVar9,aLStack232);
    lib::L2CValue::~L2CValue(aLStack232);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
    fVar15 = (float)lib::L2CValue::as_number(pLVar8);
    fVar16 = (float)lib::L2CValue::as_number(pLVar9);
    fVar15 = (float)app::sv_math::vec2_length(fVar15,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),fVar15);
    pLVar12 = (L2CAgent *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
    fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
    lib::L2CValue::L2CValue(aLStack392,fVar15);
    lib::L2CValue::operator*(pLVar8,aLStack392);
    lib::L2CAgent::math_atan(pLVar12,aLStack248,pLVar6);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue(aLStack392);
    lib::L2CValue::L2CValue((L2CValue *)(auStack424 + 0x10),0x1086bc4a93);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)(auStack424 + 0x10));
    uVar11 = lib::L2CValue::as_integer(param_10);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar11);
    lib::L2CValue::L2CValue(aLStack392,fVar15);
    lib::L2CValue::operator-((L2CValue *)(auStack376 + 0x10),aLStack392);
    lib::L2CValue::operator=((L2CValue *)(auStack376 + 0x10),aLStack248);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue(aLStack392);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
    lib::L2CValue::L2CValue(aLStack248,0.0001);
    pLVar6 = aLStack248;
    uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack376 + 0x10),pLVar6);
    lib::L2CValue::~L2CValue(aLStack248);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack248,0.0001);
      pLVar6 = aLStack248;
      lib::L2CValue::operator=((L2CValue *)(auStack376 + 0x10),pLVar6);
      lib::L2CValue::~L2CValue(aLStack248);
    }
    lib::L2CAgent::math_cos((L2CAgent *)auStack376,pLVar6);
    lib::L2CValue::operator*((L2CValue *)(auStack376 + 0x10),(L2CValue *)(auStack424 + 0x10));
    fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
    lib::L2CValue::L2CValue((L2CValue *)auStack424,fVar15);
    lib::L2CValue::operator*(aLStack392,(L2CValue *)auStack424);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
    pLVar8 = aLStack248;
    lib::L2CValue::operator=(pLVar6,pLVar8);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue((L2CValue *)auStack424);
    lib::L2CValue::~L2CValue(aLStack392);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
    lib::L2CAgent::math_sin((L2CAgent *)auStack376,pLVar8);
    lib::L2CValue::operator*((L2CValue *)(auStack376 + 0x10),aLStack392);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar6,aLStack248);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue(aLStack392);
    lib::L2CValue::L2CValue(aLStack248,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack248);
    lib::L2CAgent::push_lua_stack(param_1,pLVar6);
    lib::L2CAgent::push_lua_stack(param_1,pLVar8);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    pLVar6 = aLStack248;
LAB_7100015b84:
    lib::L2CValue::~L2CValue(pLVar6);
    lib::L2CValue::~L2CValue((L2CValue *)auStack376);
    pLVar6 = (L2CValue *)(auStack376 + 0x10);
  }
  else {
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar14);
    lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),iVar3);
    lib::L2CValue::L2CValue(aLStack248,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack376 + 0x10),aLStack248);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
    if ((uVar7 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
      uVar19 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar14,uVar4);
      lib::L2CValue::L2CValue(aLStack248,(float)uVar19);
      lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar19 >> 0x20));
      lib::L2CValue::operator=(pLVar6,aLStack248);
      lib::L2CValue::operator=(pLVar8,aLStack232);
      lib::L2CValue::~L2CValue(aLStack232);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack264,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack312,0x1fbdb2615);
      fVar15 = (float)lib::L2CValue::as_number(pLVar6);
      fVar16 = (float)lib::L2CValue::as_number(pLVar8);
      fVar17 = (float)lib::L2CValue::as_number(pLVar9);
      fVar18 = (float)lib::L2CValue::as_number(pLVar10);
      fVar15 = (float)app::sv_math::vec2_angle(fVar15,fVar16,fVar17,fVar18);
      lib::L2CValue::L2CValue(aLStack248,fVar15);
      lib::L2CValue::operator=(aLStack168,aLStack248);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::L2CValue(aLStack248,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack376,0x10ab5ed394);
      uVar7 = lib::L2CValue::as_integer(aLStack248);
      uVar11 = lib::L2CValue::as_integer((L2CValue *)auStack376);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),fVar15);
      lib::L2CValue::~L2CValue((L2CValue *)auStack376);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::L2CValue(aLStack248,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack392,0x1440a9dbcc);
      uVar7 = lib::L2CValue::as_integer(aLStack248);
      uVar11 = lib::L2CValue::as_integer(aLStack392);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)auStack376,fVar15);
      lib::L2CValue::~L2CValue(aLStack392);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::L2CValue(aLStack248,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)(auStack424 + 0x10),0x14dda63aba);
      uVar7 = lib::L2CValue::as_integer(aLStack248);
      uVar11 = lib::L2CValue::as_integer((L2CValue *)(auStack424 + 0x10));
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar11);
      lib::L2CValue::L2CValue(aLStack392,fVar15);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::L2CValue(aLStack456,0x1086bc4a93);
      uVar7 = lib::L2CValue::as_integer(aLStack456);
      pLVar6 = (L2CValue *)lib::L2CValue::as_integer(param_5);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,(ulong)pLVar6)
      ;
      lib::L2CValue::L2CValue(aLStack440,fVar15);
      lib::L2CValue::L2CValue(aLStack248,90.0);
      pLVar8 = aLStack248;
      lib::L2CValue::operator+(aLStack440,pLVar8);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CAgent::math_rad((L2CAgent *)auStack424,pLVar8);
      uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack424 + 0x10),aLStack168);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack424);
      lib::L2CValue::~L2CValue(aLStack440);
      lib::L2CValue::~L2CValue(aLStack456);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack248,GROUND_CORRECT_KIND_GROUND);
        GVar5 = lib::L2CValue::as_integer(aLStack248);
        app::lua_bind::GroundModule__correct_impl(*ppBVar14,GVar5);
        lib::L2CValue::~L2CValue(aLStack248);
        iVar3 = lib::L2CValue::as_integer(param_3);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar14,iVar3);
        lib::L2CValue::~L2CValue(aLStack392);
        lib::L2CValue::~L2CValue((L2CValue *)auStack376);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
        goto LAB_7100014300;
      }
      pLVar6 = (L2CValue *)0x1fbdb2615;
      pLVar12 = (L2CAgent *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
      lib::L2CAgent::math_abs(pLVar12,pLVar6);
      uVar7 = lib::L2CValue::operator<=((L2CValue *)(auStack376 + 0x10),aLStack248);
      lib::L2CValue::~L2CValue(aLStack248);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack504,FIGHTER_STATUS_KIND_DOWN);
        lib::L2CValue::L2CValue(aLStack520,false);
        lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0x8,(L2CValue)0xf8);
        lib::L2CValue::~L2CValue(aLStack520);
        pLVar6 = aLStack504;
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        lib::L2CValue::operator*(pLVar6,(L2CValue *)auStack376);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        lib::L2CValue::operator=(pLVar6,aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        lib::L2CValue::operator-(aLStack392);
        lib::L2CValue::operator*(pLVar6,(L2CValue *)(auStack424 + 0x10));
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        lib::L2CValue::operator=(pLVar6,aLStack248);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
        lib::L2CValue::L2CValue(aLStack248,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack184,0x1fbdb2615);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack248);
        lib::L2CAgent::push_lua_stack(param_1,pLVar6);
        lib::L2CAgent::push_lua_stack(param_1,pLVar8);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack248);
        lib::L2CValue::L2CValue(aLStack248,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue((L2CValue *)(auStack424 + 0x10),0.0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack248);
        lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack424 + 0x10));
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack424 + 0x10));
        lib::L2CValue::~L2CValue(aLStack248);
        iVar3 = lib::L2CValue::as_integer(param_9);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar3);
        lib::L2CValue::L2CValue(aLStack472,param_8);
        lib::L2CValue::L2CValue(aLStack488,false);
        lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0x28,(L2CValue)0x18);
        lib::L2CValue::~L2CValue(aLStack488);
        pLVar6 = aLStack472;
      }
      lib::L2CValue::~L2CValue(pLVar6);
      pLVar6 = aLStack392;
      goto LAB_7100015b84;
    }
    lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),GROUND_TOUCH_FLAG_RIGHT);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
    lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
    lib::L2CValue::~L2CValue(aLStack248);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack376 + 0x10),_GROUND_TOUCH_FLAG_LEFT);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack376 + 0x10));
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
      lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack248);
      lib::L2CValue::~L2CValue(aLStack248);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack376 + 0x10));
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack248,_GROUND_TOUCH_FLAG_LEFT);
        lib::L2CValue::operator=(aLStack152,aLStack248);
        goto LAB_7100014204;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack248,GROUND_TOUCH_FLAG_RIGHT);
      lib::L2CValue::operator=(aLStack152,aLStack248);
LAB_7100014204:
      lib::L2CValue::~L2CValue(aLStack248);
    }
    lib::L2CValue::L2CValue(aLStack248,0);
    uVar7 = lib::L2CValue::operator==(aLStack152,aLStack248);
    lib::L2CValue::~L2CValue(aLStack248);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack248,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack248);
      app::lua_bind::GroundModule__correct_impl(*ppBVar14,GVar5);
      lib::L2CValue::~L2CValue(aLStack248);
      iVar3 = lib::L2CValue::as_integer(param_4);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar14,iVar3);
      goto LAB_7100014300;
    }
    lib::L2CValue::L2CValue(aLStack536,param_6);
    lib::L2CValue::L2CValue(aLStack552,false);
    lua2cpp::L2CFighterBase::change_status(param_1,(L2CValue)0xe8,(L2CValue)0xd8);
    lib::L2CValue::~L2CValue(aLStack552);
    pLVar6 = aLStack536;
  }
  lib::L2CValue::~L2CValue(pLVar6);
LAB_7100015b98:
  lib::L2CValue::~L2CValue(aLStack312);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  return;
}


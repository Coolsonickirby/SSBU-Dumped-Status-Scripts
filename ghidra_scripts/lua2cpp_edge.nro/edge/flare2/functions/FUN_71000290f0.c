
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000290f0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  long lVar15;
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  undefined auStack352 [32];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  BattleObjectModuleAccessor *local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_LINK_NO_CONSTRAINT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  pLVar10 = (L2CValue *)0x1;
  uVar3 = app::lua_bind::LinkModule__get_parent_id_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2,true);
  lib::L2CValue::L2CValue(aLStack144,uVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  uVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::sv_battle_object::is_active(uVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  uVar4 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack176 + 0x10),(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),pvVar5);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLOAT_ANGLE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pBVar6 = (BattleObjectModuleAccessor *)
             lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar6,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar11);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_COUNT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pBVar6 = (BattleObjectModuleAccessor *)
             lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
    iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar6,iVar2);
    lib::L2CValue::L2CValue(aLStack192,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
    uVar4 = lib::L2CValue::operator<((L2CValue *)&local_70,aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),5);
      pBVar6 = (BattleObjectModuleAccessor *)
               lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      iVar2 = app::WeaponSpecializer_EdgeFlaredummy::get_flare2_index(pBVar6,pBVar8);
      lib::L2CValue::L2CValue(aLStack128,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,360.0);
      lib::L2CValue::operator/((L2CValue *)&local_70,aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::operator*(aLStack240,aLStack128);
      lib::L2CValue::operator+((L2CValue *)auStack176,aLStack224);
      lib::L2CValue::operator=((L2CValue *)auStack176,aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::operator+((L2CValue *)auStack176,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_ANGLE);
      fVar11 = (float)lib::L2CValue::as_number(aLStack208);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar11,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue(aLStack128,360.0);
    lib::L2CAgent::math_fmod((L2CAgent *)auStack176,aLStack128,pLVar10);
    lib::L2CValue::operator=((L2CValue *)auStack176,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    pBVar6 = (BattleObjectModuleAccessor *)
             lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
    uVar14 = app::lua_bind::PostureModule__pos_2d_impl(pBVar6);
    lib::L2CValue::L2CValue(aLStack272,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack272);
    lib::L2CValue::L2CValue(aLStack128,aLStack256);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pBVar6 = (BattleObjectModuleAccessor *)
             lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
    fVar11 = (float)app::lua_bind::PostureModule__rot_x_impl(pBVar6,iVar2);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack320,0);
    pLVar10 = (L2CValue *)auStack176;
    lib::L2CValue::operator+(aLStack224,pLVar10);
    lib::L2CAgent::math_rad((L2CAgent *)auStack352,pLVar10);
    fVar11 = (float)lib::L2CValue::as_number(param_3);
    fVar12 = (float)lib::L2CValue::as_number(aLStack320);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)(auStack352 + 0x10));
    uVar14 = app::sv_math::vec2_rot(fVar11,fVar12,fVar13);
    lib::L2CValue::L2CValue(aLStack304,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack304);
    lib::L2CValue::L2CValue(aLStack128,aLStack288);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    lib::L2CValue::~L2CValue(aLStack320);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_OFFSET_X);
    iVar2 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::operator+(pLVar10,aLStack128);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack320);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_OFFSET_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack320);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::operator+(pLVar10,aLStack128);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack320);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
    lib::L2CValue::operator+(pLVar10,pLVar7);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
    lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
    lib::L2CValue::operator+(pLVar10,pLVar7);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack320,1.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x109d30aa1b);
    lib::L2CValue::L2CValue(aLStack128,0xb710311cf);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar9 = lib::L2CValue::as_integer(aLStack128);
    pBVar6 = (BattleObjectModuleAccessor *)
             lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(pBVar6,uVar4,uVar9);
    lib::L2CValue::L2CValue((L2CValue *)(auStack352 + 0x10),iVar2);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
    uVar4 = lib::L2CValue::operator<((L2CValue *)&local_70,(L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack352,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_INT_FRAME)
      ;
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack352);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack128,iVar2);
      lib::L2CValue::operator/(aLStack128,(L2CValue *)(auStack352 + 0x10));
      lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    }
    uVar14 = app::lua_bind::PostureModule__pos_2d_impl
                       (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack384,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack368,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack384);
    lib::L2CValue::L2CValue(aLStack128,aLStack368);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack384);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack400,pLVar10);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack416,pLVar10);
    lib::L2CValue::L2CValue(aLStack432,aLStack320);
    lua2cpp::L2CFighterBase::lerp(param_2,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
    lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack448,pLVar10);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack352,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack464,pLVar10);
    lib::L2CValue::L2CValue(aLStack480,aLStack320);
    lua2cpp::L2CFighterBase::lerp(param_2,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar10,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack448);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack208,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar4 = lib::L2CValue::as_number(pLVar10);
    lVar15 = lib::L2CValue::as_number(pLVar7);
    uVar3 = lib::L2CValue::as_number(aLStack128);
    local_70 = (BattleObjectModuleAccessor *)(uVar4 & 0xffffffff | lVar15 << 0x20);
    uStack104 = (ulong)uVar3;
    app::lua_bind::PostureModule__set_pos_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(Vector3f *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator+(param_3,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_EDGE_FLARE2_INSTANCE_WORK_ID_FLOAT_LENGTH)
    ;
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar11,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(param_1,true);
    lib::L2CValue::~L2CValue((L2CValue *)auStack352);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack352 + 0x10));
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

